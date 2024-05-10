ENTRY(_start)
MEMORY {
  MROM (rx) : ORIGIN = 0x20000000, LENGTH = 4K
  SRAM (rwx) : ORIGIN = 0x0f000000, LENGTH = 8K
  FLASH (rx) : ORIGIN = 0x30000000, LENGTH = 16M
  PSRAM (rwx) : ORIGIN = 0x80000000, LENGTH = 4M
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
  } > PSRAM AT> FLASH

  _bdata_lma = LOADADDR(.data);

  .data : 
  ALIGN(0x8)
  {
    _bdata = .;
    *(.sdata*)
    *(.data*)
    _edata = .;
  } > PSRAM AT> FLASH

  .bss :
  ALIGN(0x8)
  {
    _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
    _bss_end = .;
  } > PSRAM

  .heap : 
  ALIGN(0x8)
  {
    _heap_start = .;
    _heap_end = ORIGIN(PSRAM) + LENGTH(PSRAM);
  } > PSRAM

  .stack : 
  ALIGN(0x8)
  {
    _stack_top = .;
    _stack_pointer = ORIGIN(SRAM) + LENGTH(SRAM);
  } > SRAM

}
