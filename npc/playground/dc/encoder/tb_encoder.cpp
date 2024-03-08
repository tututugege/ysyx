#include <stdio.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vencoder.h"
#include <stdlib.h>
#include <assert.h>

#define MAX_SIM_TIME 100
int sim_time = 0;

int main()
{
    Vencoder *dut = new Vencoder;

    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("wave.vcd");

    while (sim_time < MAX_SIM_TIME) {
        int num = rand() % 8;
        dut->io_in = (1 << num) + (rand() % (1 << num));
        dut->eval();
        printf("in = %d, out = %d, num = %d\n", dut->io_in, dut->io_out, num);
        m_trace->dump(sim_time++);
        if (dut->io_in != 0)
            assert(dut->io_out == num);
    }

    m_trace->close();
    delete dut;

    return 0;
}

