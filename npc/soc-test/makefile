CROSS_COMPILE = riscv64-linux-gnu-
BUILD = ../build
SRC  = $(wildcard ./*.c)
OBJ  = $(patsubst %.c, %.o, $(SRC)) 
ELF  = $(patsubst %.o, %.elf, $(OBJ)) 
BIN  = $(patsubst %.elf, %.bin, $(ELF)) 
TXT  = $(patsubst %.elf, %.txt, $(ELF)) 


CC 			= $(CROSS_COMPILE)gcc
LD 			= $(CROSS_COMPILE)ld
OBJDUMP = $(CROSS_COMPILE)objdump
OBJCOPY = $(CROSS_COMPILE)objcopy
READELF = $(CROSS_COMPILE)readelf
LDFLAGS = -melf32lriscv

CFLAGS  = -g -O2 -MMD -Wall -Werror  \
          -march=rv32g -mabi=ilp32 -mcmodel=medany -mstrict-align

CFLAGS   += -Wall -Werror 

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) $^ -c -o $@

$(ELF): $(OBJ)
	$(LD) $(LDFLAGS) $^ -o $@

$(BIN): $(ELF)
	$(OBJDUMP) -d $(ELF) > $(TXT)
	$(OBJCOPY) -S -O binary $(ELF) $(BIN)

all: $(BIN)

clean:
	rm -f ./*.elf ./*.o ./*.txt

.PHONY: all clean


