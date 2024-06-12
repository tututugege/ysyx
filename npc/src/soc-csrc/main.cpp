#include <common.h>
#include <getopt.h>
#include <nvboard.h>

bool monitor();
void init_difftest();
void init_difftest(char *ref_so_file, long img_size);
void init_gpr();

VysyxSoCFull *dut;
VerilatedVcdC *m_trace;

#define DEF_GPR(x)                                                             \
  GPR[x] =                                                                     \
      &dut->rootp                                                              \
           ->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__gprSeq_##x;

void nvboard_bind_all_pins(VysyxSoCFull *top);

char *img_file = NULL;
char *diff_so_file = NULL;
bool gen_trace = false;
char *trace_path = NULL;

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

void parse_arg(int argc, char *argv[]) {
  const struct option table[] = {
      {"trace", required_argument, NULL, 't'},
      {"diff", required_argument, NULL, 'd'},
      {"help", no_argument, NULL, 'h'},
      {0, 0, NULL, 0},
  };

  int o;
  while ((o = getopt_long(argc, argv, "-ht:d:", table, NULL)) != -1) {

    switch (o) {

    case 'd':
      diff_so_file = optarg;
      break;
#ifdef CONFIG_DIFFTEST
    case 't':
      gen_trace = true;
      trace_path = optarg;
      break;
#endif
    case 1:
      img_file = optarg;
      break;
    default:
      printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
      printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
      printf("\t-t,--trace              generate instruction trace\n");
      printf("\n");
      exit(0);
    }
  }
}

int main(int argc, char *argv[]) {
  Verilated::commandArgs(argc, argv);

  parse_arg(argc, argv);

  assert(img_file);

  dut = new VysyxSoCFull;
  init_gpr();
  int file_size = init_flash(img_file);

#ifdef CONFIG_DIFFTEST
  init_difftest(diff_so_file, file_size);

  if (gen_trace) {
    extern void (*ref_difftest_exec)(uint64_t n);
    ref_difftest_exec(-1);
    return 0;
  }
#endif

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
