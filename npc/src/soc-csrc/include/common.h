#include <VysyxSoCFull.h>
#include <VysyxSoCFull___024root.h>
#include <iostream>
#include <log.h>
#include <stdio.h>
#include <verilated_vcd_c.h>

#define EBREAK 0x00100073
#define GPR_NUM 16
#define CONFIG_SRAM_BASE 0x0f000000
#define CONFIG_SRAM_SIZE 0x2000

#define CONFIG_MROM_BASE 0x20000000
#define CONFIG_MROM_SIZE 0x1000

#define CONFIG_FLASH_BASE 0x30000000
#define CONFIG_FLASH_SIZE 0x1000000

#define RESET_VECTOR CONFIG_FLASH_BASE
#define gpr(i) (*GPR[i])

typedef uint32_t paddr_t;

#define MAX_SIM_TIME 7000000
// #define CONFIG_WAVE
#define CONFIG_WAVE_START 0
// #define CONFIG_DIFFTEST
#define CONFIG_INFINITY
#define CONFIG_NVBOARD

enum SOC_state { RUNNING, GOOD_TRAP, BAD_TRAP };
void single_cycle();
void reset(int n);

extern SOC_state state;
extern VysyxSoCFull *dut;
extern VerilatedVcdC *m_trace;
extern uint8_t mrom[CONFIG_MROM_SIZE];
extern uint8_t flash[CONFIG_FLASH_SIZE];
extern uint32_t *GPR[GPR_NUM];
