AM_SRCS := riscv/ysyxsoc/start.S \
           riscv/ysyxsoc/trm.c \
           platform/dummy/vme.c \
           platform/dummy/mpe.c

CFLAGS    += -fdata-sections -ffunction-sections
LDFLAGS   += -T $(AM_HOME)/scripts/platform/linker.ld \
						 --defsym=_pmem_start=0x20000000 --defsym=_entry_offset=0x0 \
						 --defsym=_stack_top=0x0f000000

LDFLAGS   += --gc-sections -e _start
CFLAGS += -DMAINARGS=\"$(mainargs)\"
.PHONY: $(AM_HOME)/am/src/riscv/ysyxsoc/trm.c

SOCFLAGS = $(IMAGE).elf

image: $(IMAGE).elf
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S -O binary $(IMAGE).elf $(IMAGE).bin

all: image
	$(MAKE) -C $(NPC_HOME) IMG=$(IMAGE).bin soc-sim 

run: image
	$(MAKE) -C $(NPC_HOME) IMG=$(IMAGE).bin soc-run 

gdb: image
	$(MAKE) -C $(NPC_HOME) IMG=$(IMAGE).bin soc-gdb 

wave:
	$(MAKE) -C $(NPC_HOME) wave
