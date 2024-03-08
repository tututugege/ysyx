#include <stdio.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <Vps2_keyboard.h>
#include <stdlib.h>
#include <assert.h>

#define MAX_SIM_TIME 1000
int sim_time = 0;

static Vps2_keyboard* dut;
static VerilatedVcdC *m_trace;

static void single_cycle() {
    dut->clk = 0;
    dut->eval();
    m_trace->dump(sim_time++);
    dut->clk = 1;
    dut->eval();
    m_trace->dump(sim_time++);
}

static void cycle(int n)
{
    while (n --> 0)
        single_cycle();
}

#define KBD_CLK_PERIOD 60

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
        cycle(3);
        dut->ps2_clk = 0;
        cycle(3);
        dut->ps2_clk = 1;
    }
}

int main()
{
    dut = new Vps2_keyboard;
    m_trace = new VerilatedVcdC;

    Verilated::traceEverOn(true);
    dut->trace(m_trace, 5);
    m_trace->open("wave.vcd");

    // reset(10);

    dut->ps2_clk = 1;
    dut->clrn = 0;
    cycle(2);
    dut->clrn = 1;
    cycle(2);

    while (sim_time < MAX_SIM_TIME) {
        load_ch(char(rand() % 256));
        cycle(2);
        dut->nextdata_n = 0;
        cycle(2);
        dut->nextdata_n = 1;
    }

    m_trace->close();
    delete dut;

    return 0;
}