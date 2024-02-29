#include <stdio.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <VTOP.h>
#include <stdlib.h>
#include <assert.h>

#define MAX_SIM_TIME 40
int sim_time = 0;

static VTOP* dut;
static VerilatedVcdC *m_trace;


static void single_cycle() {
    dut->clock = 0;
    dut->eval();
    m_trace->dump(sim_time++);
    dut->clock = 1;
    dut->eval();
    m_trace->dump(sim_time++);
}

static void reset(int n) {
    dut->reset = 1;
    while (n -- > 0) single_cycle();
    dut->reset = 0;
}


int main()
{
    dut = new VTOP;
    m_trace = new VerilatedVcdC;

    Verilated::traceEverOn(true);
    dut->trace(m_trace, 5);
    m_trace->open("wave.vcd");

    reset(10);

    while (sim_time < MAX_SIM_TIME) {
        dut->io_din = 1;
        single_cycle();
    }

    m_trace->close();
    delete dut;

    return 0;
}