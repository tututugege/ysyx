#include <VSimpleCpu.h>
#include <VSimpleCpu___024root.h>
#include <common.h>
#include <verilated_vcd_c.h>

#define gpr(x) (*((&(dut->rootp->SimpleCpu__DOT__RF__DOT__gprSeq_0)) + (x)))
#define PC (dut->rootp->SimpleCpu__DOT__PcReg)
#define INST (dut->rootp->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)
#define GPR_A0 10
#define GPR_NUM 32
#define RESET_VECTOR 0x80000000

typedef struct {
  int state;
  vaddr_t halt_pc;
  uint32_t halt_ret;
} NPCState;

extern VSimpleCpu *dut;
extern VerilatedVcdC *m_trace;
extern int sim_time;
extern NPCState npc_state;

extern uint8_t inst_ram[0x100000];
extern const char *regs[];

#define MAX_SIM_TIME 10000
#define TIME_OUT (sim_time >= MAX_SIM_TIME)

enum { NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT, NPC_QUIT };
