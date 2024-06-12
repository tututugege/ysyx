#include <common.h>
#include <cpu-info.h>
#include <difftest.h>
#include <elf.h>
#include <getopt.h>
#include <log.h>

static char *img_file;
static char *elf_file;
static char *log_file;
static char *diff_so_file;

bool batch_mode = false;

void sdb_mainloop();
void init_gpr();
void reset(int n);
void single_cycle();
extern "C" void init_disasm(const char *triple);

VNPC *dut;
VerilatedVcdC *m_trace;

uint8_t inst_ram[CONFIG_MSIZE];
uint32_t *GPR[GPR_NUM];

int sim_time = 0;

NPCState npc_state = {.state = NPC_STOP};

static void welcome() {
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to %s-NPC!\n",
         ANSI_FMT("riscv32", ANSI_FG_YELLOW ANSI_BG_RED));
  printf("For help, type \"help\"\n");
}

int init_img() {
  FILE *fp = fopen(img_file, "r");

  assert(fp != NULL);

  /* printf("\n%s\n", img_file); */
  int i = 0;
  fseek(fp, 0, SEEK_END);
  int file_size = ftell(fp);
  rewind(fp);
  assert(fread(inst_ram, sizeof(uint8_t), file_size, fp));
  fclose(fp);

  extern uint32_t last_inst;
  last_inst = inst_ram[0];

  return file_size;
}

FILE *log_fp = NULL;

void init_log() {
  log_fp = stdout;
  if (log_file != NULL) {
    FILE *fp = fopen(log_file, "w");
    assert(fp);
    log_fp = fp;
  }
  Log("Log is written to %s", log_file ? log_file : "stdout");
}

#ifdef CONFIG_FTRACE

typedef struct {
  char name[32];
  size_t func_start;
  size_t func_end;
} ftrace_node;

#define MAX_FTRACE_NUM 64
ftrace_node ftrace[MAX_FTRACE_NUM];
int nr_ftrace;

void ftrace_commit(vaddr_t pc, vaddr_t npc) {
  static int depth = 0;
  int now_func = -1;
  int next_func = -1;
  for (int i = 0; i < nr_ftrace; i++) {
    if (npc == ftrace[i].func_start) {
      log_write("0x%x: ", pc);
      for (int j = 0; j < depth; j++)
        log_write(" ");
      log_write("call %s@0x%x\n", ftrace[i].name, npc);
      depth++;
      return;
    }

    if (now_func == -1 && pc >= ftrace[i].func_start &&
        pc <= ftrace[i].func_end)
      now_func = i;
    if (next_func == -1 && npc >= ftrace[i].func_start &&
        npc <= ftrace[i].func_end)
      next_func = i;

    if (next_func != -1 && now_func != -1)
      break;
  }

  if (now_func != next_func) {
    depth--;
    log_write("0x%x: ", pc);
    for (int j = 0; j < depth; j++)
      log_write(" ");

    log_write("return %s@0x%x\n", ftrace[now_func].name, pc);
  }
}

void init_elf() {
  FILE *fp = fopen(elf_file, "r");
  int ret;
  // Assert(fp, "Can not open '%s'", elf_file);
  if (fp == NULL)
    return;

  Elf32_Ehdr e_head;
  Elf32_Shdr sh_head;
  Elf32_Sym sym_head;
  ret = fread(&e_head, sizeof(Elf32_Ehdr), 1, fp);
  assert(ret);
  assert(e_head.e_ident[0] == ELFMAG0);

  int symtab_off = 0;
  int sym_num = 0;
  int strtab_off = 0;

  int ch;

  for (int i = 0; i < e_head.e_shnum; i++) {
    fseek(fp, e_head.e_shoff + i * e_head.e_shentsize, SEEK_SET);
    ret = fread(&sh_head, sizeof(Elf32_Shdr), 1, fp);
    assert(ret);

    if (sh_head.sh_type == SHT_SYMTAB) {
      symtab_off = sh_head.sh_offset;
      sym_num = sh_head.sh_size / sizeof(Elf32_Sym);
    } else if (sh_head.sh_type == SHT_STRTAB) {
      strtab_off = sh_head.sh_offset;
    }

    if (symtab_off && strtab_off)
      break;
  }

  for (int i = 0; i < sym_num; i++) {
    fseek(fp, symtab_off + i * sizeof(Elf32_Sym), SEEK_SET);
    ret = fread(&sym_head, sizeof(Elf32_Sym), 1, fp);
    assert(ret);

    if (ELF32_ST_TYPE(sym_head.st_info) == STT_FUNC) {
      ftrace[nr_ftrace].func_start = sym_head.st_value;
      ftrace[nr_ftrace].func_end = sym_head.st_value + sym_head.st_size - 1;
      fseek(fp, strtab_off + sym_head.st_name, SEEK_SET);
      int name_idx = 0;
      while ((ch = fgetc(fp)) != '\0' && name_idx < 31) {
        ftrace[nr_ftrace].name[name_idx++] = ch;
      }
      ftrace[nr_ftrace].name[name_idx] = '\0';
      nr_ftrace++;
    }

    assert(nr_ftrace <= MAX_FTRACE_NUM);
  }

  fclose(fp);

  /* for (int i = 0; i < nr_ftrace; i++) { */
  /*   printf("%d %s %lx %lx\n", i, ftrace[i].name, ftrace[i].func_start, */
  /*          ftrace[i].func_end); */
  /* } */
}

#endif

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
      {"batch", no_argument, NULL, 'b'},
      {"log", required_argument, NULL, 'l'},
      {"diff", required_argument, NULL, 'd'},
      {"help", no_argument, NULL, 'h'},
      {"elf", required_argument, NULL, 'e'},
      {0, 0, NULL, 0},
  };
  int o;
  while ((o = getopt_long(argc, argv, "-bl:e:d:", table, NULL)) != -1) {
    switch (o) {
    case 'l':
      log_file = optarg;
      break;
    case 'b':
      batch_mode = true;
      break;
    case 'e':
      elf_file = optarg;
      break;
    case 'd':
      diff_so_file = optarg;
      break;
    case 1:
      img_file = optarg;
      return 0;
    default:
      printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
      printf("\t-b,--batch              run with batch mode\n");
      printf("\t-l,--log=FILE           output log to FILE\n");
      printf("\t-e,--elf=FILE           load ELF file for ftrace\n");
      printf("\t-d,--diff=FILE          load so file to load ref\n");
      printf("\n");
      exit(0);
    }
  }
  return 0;
}

#define GPR_NAME(x) (dut->rootp->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_##x)
#define macro(i) GPR[i] = &(GPR_NAME(i))

int init_monitor(int argc, char *argv[]) {
  Verilated::commandArgs(argc, argv);
  parse_args(argc, argv);

  // Open the log file
  init_log();

  // load image to inst_ram
  int img_size = init_img();
  printf("img size 0x%x\n", img_size);

#ifdef CONFIG_FTRACE
  // init elf file fo ftrace
  init_elf();
#endif

#ifdef CONFIG_ITRACE
  // init disasm
  init_disasm("riscv32");
#endif

  // init dut and wave
  dut = new VNPC;
  init_gpr();

#ifdef CONFIG_WAVE
  m_trace = new VerilatedVcdC;
  Verilated::traceEverOn(true);
  dut->trace(m_trace, 5);
  m_trace->open("wave.vcd");
#endif

  printf("Reset NPC...\n");
  reset(10);

  // init difftest ref nemu
#ifdef CONFIG_DIFFTEST
  init_difftest(diff_so_file, img_size);
#endif

  welcome();

  sdb_mainloop();

  int ret = 1;

  printf("****************************************************\n");
  if (TIME_OUT) {
    printf("Time Out!\n");
  } else {
    if (npc_state.halt_pc != 0) {
      if (npc_state.halt_ret == 0) {

        printf(ANSI_FG_GREEN "Hit Good Trap ^-^ at pc = 0x%08x\n" ANSI_NONE,
               COMMIT_PC);
        ret = 0;
      } else {
        printf(ANSI_FG_RED "Hit Bad Trap QAQ at pc = 0x%08x\n" ANSI_NONE);
        m_trace->dump(sim_time++);
        m_trace->dump(sim_time);
      }
    } else if (npc_state.state == NPC_QUIT) {
      printf("Quit\n");
      ret = 0;
    } else {
      printf("Error quit\n");
    }
  }
  printf("****************************************************\n");

#ifdef CONFIG_WAVE
  m_trace->close();
  delete m_trace;
#endif
  delete dut;

  return ret;
}

void init_gpr() {
  macro(0);
  macro(1);
  macro(2);
  macro(3);
  macro(4);
  macro(5);
  macro(6);
  macro(7);
  macro(8);
  macro(9);
  macro(10);
  macro(11);
  macro(12);
  macro(13);
  macro(14);
  macro(15);
  macro(16);
  macro(17);
  macro(18);
  macro(19);
  macro(20);
  macro(21);
  macro(22);
  macro(23);
  macro(24);
  macro(25);
  macro(26);
  macro(27);
  macro(28);
  macro(29);
  macro(30);
  macro(31);
}
