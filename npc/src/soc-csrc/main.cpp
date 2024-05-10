#include <common.h>

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
  /* for (int i = 0; i < CONFIG_FLASH_SIZE / sizeof(int); i++) */
  /*   *(uint32_t *)(flash + i * sizeof(int)) = */
  /*       CONFIG_FLASH_BASE + i * sizeof(int); */
  /* FILE *fp = fopen( */
  /*     "/home/tututu/hry/ysyx/ysyx-workbench/npc/soc-test/uart_test.bin",
   * "r"); */
  FILE *fp = fopen(img, "r");
  assert(fp != NULL);
  fseek(fp, 0, SEEK_END);
  int file_size = ftell(fp);
  rewind(fp);
  assert(fread(flash, sizeof(uint8_t), file_size, fp));
  fclose(fp);

  /* printf("%08x\n", *(uint32_t *)(flash + 0xe8)); */

  return file_size;
}

VysyxSoCFull *dut;
VerilatedVcdC *m_trace;

#define DEF_GPR(x)                                                             \
  GPR[x] =                                                                     \
      &dut->rootp                                                              \
           ->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_##x;
void init_gpr();

int main(int argc, char *argv[]) {
  Verilated::commandArgs(argc, argv);
  dut = new VysyxSoCFull;
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

#ifdef CONFIG_WAVE
  m_trace->close();
  delete dut;
  delete m_trace;
#endif

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
  DEF_GPR(16);
  DEF_GPR(17);
  DEF_GPR(18);
  DEF_GPR(19);
  DEF_GPR(20);
  DEF_GPR(21);
  DEF_GPR(22);
  DEF_GPR(23);
  DEF_GPR(24);
  DEF_GPR(25);
  DEF_GPR(26);
  DEF_GPR(27);
  DEF_GPR(28);
  DEF_GPR(29);
  DEF_GPR(30);
  DEF_GPR(31);
}
