#include <stdio.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VTOP.h"
#include <stdlib.h>
#include <assert.h>

#define MAX_SIM_TIME 10
int sim_time = 0;

int main()
{
    VTOP *dut = new VTOP;

    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("wave.vcd");
    while (sim_time < MAX_SIM_TIME) {
        int a = rand() & 1;
        int b = rand() & 1;
        dut->io_a = a;
        dut->io_b = b;
        dut->eval();
        printf("a = %d, b = %d, f = %d\n", a, b, dut->io_out);
        m_trace->dump(sim_time++);
        assert(dut->io_out == (a ^ b));
    }

    m_trace->close();
    delete dut;

    return 0;
}

