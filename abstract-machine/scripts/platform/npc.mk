AM_SRCS := riscv/npc/start.S \
           riscv/npc/trm.c \
           riscv/npc/ioe.c \
           riscv/npc/timer.c \
           riscv/npc/gpu.c \
           riscv/npc/input.c \
           riscv/npc/cte.c \
           riscv/npc/trap.S \
           platform/dummy/vme.c \
           platform/dummy/mpe.c

CFLAGS    += -fdata-sections -ffunction-sections
LDFLAGS   += -T $(AM_HOME)/scripts/linker.ld \
						 --defsym=_pmem_start=0x80000000 --defsym=_entry_offset=0x0

LDFLAGS   += --gc-sections -e _start
CFLAGS += -DMAINARGS=\"$(mainargs)\"
.PHONY: $(AM_HOME)/am/src/riscv/npc/trm.c

NPCFLAGS = -l $(shell dirname $(IMAGE).elf)/npc-log.txt -e $(IMAGE).elf -b

image: $(IMAGE).elf
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin

all: image
	$(MAKE) -C $(NPC_HOME) IMG=$(IMAGE).bin ARGS="$(NPCFLAGS)" sim 

run: image
	$(MAKE) -C $(NPC_HOME) IMG=$(IMAGE).bin ARGS="$(NPCFLAGS)" run 

gdb: image
	$(MAKE) -C $(NPC_HOME) IMG=$(IMAGE).bin ARGS="$(NPCFLAGS)" gdb 
wave:
	$(MAKE) -C $(NPC_HOME) wave
