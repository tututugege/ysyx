#include <VSimpleCpu.h>
#include <VSimpleCpu___024root.h>
#include <common.h>
#include <verilated_vcd_c.h>

#define PC (dut->rootp->SimpleCpu__DOT__PcReg)
#define INST (dut->rootp->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)
#define GPR_A0 10
#define GPR_NUM 32
#define gpr(x) (*GPR[x])

typedef struct {
  int state;
  vaddr_t halt_pc;
  uint32_t halt_ret;
} NPCState;

extern VSimpleCpu *dut;
extern VerilatedVcdC *m_trace;
extern int sim_time;
extern NPCState npc_state;

extern uint8_t inst_ram[CONFIG_MSIZE];
extern uint32_t *GPR[GPR_NUM];
extern const char *regs[];

#define MAX_SIM_TIME INT32_MAX
#define TIME_OUT (sim_time >= MAX_SIM_TIME)

enum { NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT, NPC_QUIT };
