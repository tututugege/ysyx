#include <common.h>
#include <nvboard.h>

bool monitor();
void init_difftest();
void init_difftest(char *ref_so_file, long img_size);

/* int init_mrom(char *img) { */
/*   FILE *fp = fopen(img, "r"); */
/*   assert(fp != NULL); */
/**/
/*   fseek(fp, 0, SEEK_END); */
/*   int file_size = ftell(fp); */
/*   rewind(fp); */
/*   assert(fread(mrom, sizeof(uint8_t), file_size, fp)); */
/*   fclose(fp); */
/*   printf("img size: %d\n", file_size); */
/*   return file_size; */
/* } */

int init_flash(char *img) {

  FILE *fp = fopen(img, "r");
  assert(fp != NULL);
  fseek(fp, 0, SEEK_END);
  int file_size = ftell(fp);
  printf("image size: %x\n", file_size);
  rewind(fp);
  assert(fread(flash, sizeof(uint8_t), file_size, fp));
  fclose(fp);

  return file_size;
}

VysyxSoCFull *dut;
VerilatedVcdC *m_trace;

#define DEF_GPR(x)                                                             \
  GPR[x] =                                                                     \
      &dut->rootp                                                              \
           ->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_##x;
void init_gpr();
void nvboard_bind_all_pins(VysyxSoCFull *top);

int main(int argc, char *argv[]) {
  Verilated::commandArgs(argc, argv);
  dut = new VysyxSoCFull;

#ifdef CONFIG_NVBOARD
  nvboard_bind_all_pins(dut);
  nvboard_init();
#endif

#ifdef CONFIG_WAVE
  Verilated::traceEverOn(true);
  m_trace = new VerilatedVcdC;
  dut->trace(m_trace, 5);
  m_trace->open("wave.vcd");
#endif

  assert(argc == 3);
  init_gpr();
  init_difftest(argv[2], init_flash(argv[1]));
  int ret = !monitor();

  delete dut;
  return ret;
}

void init_gpr() {
  DEF_GPR(0);
  DEF_GPR(1);
  DEF_GPR(2);
  DEF_GPR(3);
  DEF_GPR(4);
  DEF_GPR(5);
  DEF_GPR(6);
  DEF_GPR(7);
  DEF_GPR(8);
  DEF_GPR(9);
  DEF_GPR(10);
  DEF_GPR(11);
  DEF_GPR(12);
  DEF_GPR(13);
  DEF_GPR(14);
  DEF_GPR(15);
}
