#include <common.h>
#include <cpu-info.h>
#include <cstdlib>
#include <readline/history.h>
#include <readline/readline.h>

void cycle(int n);

extern "C" int pmem_read(int addr);
extern bool batch_mode;

const char *regs[] = {"zero", "ra", "sp",  "gp",  "tp", "t0", "t1", "t2",
                      "s0",   "s1", "a0",  "a1",  "a2", "a3", "a4", "a5",
                      "a6",   "a7", "s2",  "s3",  "s4", "s5", "s6", "s7",
                      "s8",   "s9", "s10", "s11", "t3", "t4", "t5", "t6"};

static int cmd_si(char *args);
static int cmd_info(char *args);
static int cmd_x(char *args);
static int cmd_c(char *args);
static int cmd_help(char *args);
static int cmd_q(char *args);

static char *rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(npc) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static struct {
  const char *name;
  const char *description;
  int (*handler)(char *);
} cmd_table[] = {
    {"help", "Display information about all supported commands", cmd_help},
    {"c", "Continue the execution of the program", cmd_c},
    {"q", "Exit NEMU", cmd_q},

    /* TODO: Add more commands */
    {"si", "execute N steps", cmd_si},
    {"info", "display infomation NEMU", cmd_info},
    {"x", "scan memory", cmd_x},
};

#define NR_CMD (int)(sizeof(cmd_table) / sizeof(cmd_table[0]))

void isa_reg_display() {
  for (int i = 0; i < GPR_NUM; i++) {
    printf("%s: %08x ", regs[i], gpr(i));
    if (i % 8 == 7)
      putchar('\n');
  }
  printf("PC: %08x\n", COMMIT_PC);
}

void sdb_mainloop() {

  if (batch_mode) {
    cmd_c(NULL);
    return;
  }

  static int last_cmd = -1;
  for (char *str; (str = rl_gets()) != NULL;) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL && last_cmd != -1) {
      cmd_table[last_cmd].handler(NULL);
      continue;
    }

    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

    int i;
    for (i = 0; i < NR_CMD; i++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        last_cmd = i;
        if (cmd_table[i].handler(args) < 0) {
          return;
        }
        break;
      }
    }

    if (i == NR_CMD) {
      printf("Unknown command '%s'\n", cmd);
    }
  }
}
static int cmd_q(char *args) {
  npc_state.state = NPC_QUIT;
  return -1;
}

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i++) {
      printf("%s\t- %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  } else {
    for (i = 0; i < NR_CMD; i++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

static int cmd_si(char *args) {
  if (npc_state.state == NPC_STOP && TIME_OUT == 0) {
    cycle(1);
  } else {
    printf("NPC has been halted\n");
    return 0;
  }

  if (dut->io_commit_halt == 1) {
    npc_state.state = NPC_ABORT;
    npc_state.halt_pc = COMMIT_PC;
    npc_state.halt_ret = gpr(GPR_A0);
    printf("Halt at PC: %x\n", COMMIT_PC);
  }

  return 0;
}

static int cmd_c(char *args) {
  if (npc_state.state == NPC_ABORT || TIME_OUT == 1) {
    printf("NPC has been halted\n");
    return 0;
  }

  cycle(MAX_SIM_TIME);

  if (HALT == 1) {
    npc_state.state = NPC_ABORT;
    npc_state.halt_pc = COMMIT_PC;
    npc_state.halt_ret = gpr(GPR_A0);
    printf("Halt at PC: %x\n", COMMIT_PC);
  }

  return 0;
}

static int cmd_info(char *args) {
  isa_reg_display();
  return 0;
}

static int cmd_x(char *args) {
  char *arg = strtok(NULL, " ");
  int size;
  int addr;

  if (arg == NULL) {
    printf("Argument required\n");
    return 0;
  } else if ((size = atoi(arg)) == 0) {
    printf("Unknown command: %s\n", arg);
    return 0;
  }

  arg = strtok(NULL, " ");

  if (arg == NULL) {
    printf("Argument required\n");
    return 0;
  }

  if ((addr = strtol(arg, NULL, 0)) == 0) {
    printf("Error address %s\n", arg);
    return 0;
  }

  addr = addr & ~0x3u;
  for (int i = 0; i < size; i += 4) {
    printf("%08x: ", addr + i * 4);
    for (int j = 0; j < 4; j++) {
      printf("0x%08x ", pmem_read(addr + (i + j) * 4));
    }
    printf("\n");
  }

  return 0;
}
