# assembly
this project is part of 42 school assignments, the goal is  is to get familiar with assembly language.
# Notes
- OS X is 16 byte stack aligned which means the machine expects each variable on the stach
to start on byte that is multiple of 16. when the stack is misaligned it means we try
reading variable from middle of 16 (source 4-ths link).  

- there are 16 general purpose registers and each register can be used as 64-bit, 32-bit
16-bit 8-bit. example "mov rax, 60" now rax contains:
	00000000 00000000 00000000 00000000 00000000 00000000 00000000 00111100
a 32-bit register contains a set of of 32 lower bits of 64-bits register
similarly for 16-bit and 8-bit register contains the lowest 16 bits and 8 bits.

- the processor keep track of next instruction to be executed by storing the adress of next
instruction in rip. a safer way to changing rip is by using jmp. 

- for syscall error check carry flag, the carry flag value is the first bit in rflags register
so it's either 0 or 1. 

- "-fno-builtin" flag in gcc don't recognize built-in functions that do not begin with __builtin_ as prefix. 
