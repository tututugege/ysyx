.section entry, "ax"
.globl _start
.type _start, @function

_start:

  la a0, _bssbl_lma
  la a1, _bssbl
  la a2, _essbl

LD_SSBL:
  bge a1, a2, END
  lw s0, 0(a0)
  sw s0, 0(a1)
  addi a0, a0, 4
  addi a1, a1, 4
  j LD_SSBL
 
END:
  call SSBL



.section second, "ax"
.globl SSBL
.type SSBL, @function

SSBL:
  la t0, _bdata_lma
  la t1, _bdata
  la t2, _edata

  mv s1, t2
  andi t2, t2, 0xFFFFFFFC

LD_DATA:
  bge t1, t2, LD_DATA_UNALIGN
  lw s0, 0(t0)
  sw s0, 0(t1)
  addi t0, t0, 4
  addi t1, t1, 4
  j LD_DATA

LD_DATA_UNALIGN:
  bge t1, s1, TEXT
  lb s0, 0(t0)
  sb s0, 0(t1)
  addi t0, t0, 1
  addi t1, t1, 1
  j LD_DATA_UNALIGN

TEXT:
  la t0, _btext_lma
  la t1, _btext
  la t2, _etext

  mv s1, t2
  andi t2, t2, 0xFFFFFFFC

LD_TEXT:
  bge t1, t2, LD_TEXT_UNALIGN
  lw s0, 0(t0)
  sw s0, 0(t1)
  addi t0, t0, 4
  addi t1, t1, 4
  j LD_TEXT

LD_TEXT_UNALIGN:
  bge t1, s1, GO
  lb s0, 0(t0)
  sb s0, 0(t1)
  addi t0, t0, 1
  addi t1, t1, 1
  j LD_TEXT_UNALIGN
 
GO:
  la sp, _stack_pointer
  call _trm_init
