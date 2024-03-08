#include <stdio.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <VTOP.h>
#include <stdlib.h>
#include <assert.h>

#define MAX_SIM_TIME 400
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

static void cycle(int n)
{
    while (n --> 0)
        single_cycle();
}

static void reset(int n) {
    dut->reset = 1;
    while (n -- > 0) single_cycle();
    dut->reset = 0;
}


#define KBD_CLK_CYCLE 3

int send_buffer[11];
void load_ch(char code)
{
    int odd_parity = 0;

    send_buffer[0] = 0; 
    for (int i = 0; i < 8; i++) {
        send_buffer[i + 1] = code & 0x1;
        code = code >> 1;
        odd_parity ^= send_buffer[i + 1];
    }
    send_buffer[9] = odd_parity ^ 1;
    send_buffer[10] = 1;

    for (int i = 0; i < 11; i++) {
        dut->ps2_data = send_buffer[i];
        cycle(KBD_CLK_CYCLE);
        dut->ps2_clk = 0;
        cycle(KBD_CLK_CYCLE);
        dut->ps2_clk = 1;
    }
}

int main()
{
    dut = new VTOP;
    m_trace = new VerilatedVcdC;

    Verilated::traceEverOn(true);
    dut->trace(m_trace, 5);
    m_trace->open("wave.vcd");

    dut->ps2_clk = 1;
    reset(10);

    dut->clr = 1;
    cycle(2);
    dut->clr = 0;
    cycle(2);

    while (sim_time < MAX_SIM_TIME) {
        load_ch(char(rand() % 256));
    }

    m_trace->close();
    delete dut;

    return 0;
}