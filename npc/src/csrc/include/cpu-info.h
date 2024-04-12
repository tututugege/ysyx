#include <VTOP.h>
#include <VTOP___024root.h>
#include <common.h>
#include <verilated_vcd_c.h>

#define COMMIT_PC (dut->io_commit_pc)
#define COMMIT (dut->io_commit_commit)
#define IF_PC (dut->rootp->TOP__DOT__IF__DOT__pcReg)
#define MEM_PC (dut->rootp->TOP__DOT__MEM_io_EX2MEM_bits_r_pc)
#define HALT (dut->io_commit_halt)
#define INST (dut->io_commit_inst)
#define GPR_A0 10
#define GPR_NUM 32
#define gpr(x) (*GPR[x])

typedef struct {
  int state;
  vaddr_t halt_pc;
  uint32_t halt_ret;
} NPCState;

extern VTOP *dut;
extern VerilatedVcdC *m_trace;
extern int sim_time;
extern NPCState npc_state;

extern uint8_t inst_ram[CONFIG_MSIZE];
extern uint32_t *GPR[GPR_NUM];
extern const char *regs[];

#define MAX_SIM_TIME 100000000
#define TIME_OUT (sim_time >= MAX_SIM_TIME)

enum { NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT, NPC_QUIT };
