include $(AM_HOME)/scripts/isa/riscv.mk
include $(AM_HOME)/scripts/platform/ysyxsoc.mk
COMMON_CFLAGS += -march=rv32em_zicsr -mabi=ilp32e  # overwrite
LDFLAGS       += -melf32lriscv      # overwrite
# LDFLAGS       += --print-map        # overwrite

