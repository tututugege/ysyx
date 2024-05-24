ENTRY(_start)
MEMORY {
  MROM (rx) : ORIGIN = 0x20000000, LENGTH = 4K
  SRAM (rwx) : ORIGIN = 0x0f000000, LENGTH = 8K
  FLASH (rx) : ORIGIN = 0x30000000, LENGTH = 16M
  PSRAM (rwx) : ORIGIN = 0x80000000, LENGTH = 4M
  SDRAM (rwx) : ORIGIN = 0xa0000000, LENGTH = 64M
}

SECTIONS {
  /* _pmem_start and _entry_offset are defined in LDFLAGS */


  .entry : {
    . = ORIGIN(FLASH);
    *(entry)
  } > FLASH

  _bssbl_lma = LOADADDR(.second);

  .second  : 
  ALIGN(0x8)
  {
    _bssbl = .;
    *(second)
    _essbl = .;
  } > SRAM AT> FLASH

  _btext_lma = LOADADDR(.text);

  .text : 
  ALIGN(0x8)
  {
    _btext = .;
    *(.text*)
    *(.rodata*)
    *(.srodata*)
    _etext = .;
  } > SDRAM AT> FLASH

  _bdata_lma = LOADADDR(.data);

  . = .;
  .data : 
  ALIGN(0x8)
  {
    _bdata = .;
    *(.sdata*)
    *(.data*)
    _edata = .;
  } > SDRAM AT> FLASH


  . = .;
  .bss :
  ALIGN(0x8)
  {
    _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
    _bss_end = .;
  } > SDRAM

  .heap : 
  ALIGN(0x1000)
  {
    _heap_start = .;
    _heap_end = ORIGIN(SDRAM) + LENGTH(SDRAM) / 2;
    . = _heap_end;
  } > SDRAM

  .stack : 
  ALIGN(0x8)
  {
    _stack_top = .;
    _stack_pointer = ORIGIN(SDRAM) + LENGTH(SDRAM);
    . = _stack_pointer;
  } > SDRAM
}
