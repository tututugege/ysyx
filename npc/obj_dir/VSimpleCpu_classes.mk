# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VSimpleCpu.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VSimpleCpu \
	VSimpleCpu___024root__DepSet_ha904b143__0 \
	VSimpleCpu___024root__DepSet_h837b86a6__0 \
	VSimpleCpu___024unit__DepSet_h937bd481__0 \
	VSimpleCpu_SelectorBundle__DepSet_h2a78a50b__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VSimpleCpu___024root__Slow \
	VSimpleCpu___024root__DepSet_ha904b143__0__Slow \
	VSimpleCpu___024root__DepSet_h837b86a6__0__Slow \
	VSimpleCpu___024unit__Slow \
	VSimpleCpu___024unit__DepSet_hb9b2a9e4__0__Slow \
	VSimpleCpu_SelectorBundle__Slow \
	VSimpleCpu_SelectorBundle__DepSet_hc329994f__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VSimpleCpu__Dpi \
	VSimpleCpu__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VSimpleCpu__Syms \
	VSimpleCpu__Trace__0__Slow \
	VSimpleCpu__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
