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
# Links
1- [How many bytes resb, resw, resd, resq allocate in nasm?</br>](https://stackoverflow.com/questions/44860003/how-many-bytes-do-resb-resw-resd-resq-allocate-in-nasm)
2- [calling printf/scanf inside assembly code.</br>](https://stackoverflow.com/questions/20082414/mac-os-x-32-bit-nasm-assembly-program-using-main-and-scanf-printf)
3- [Register function calls.</br>](https://www.cs.uaf.edu/2017/fall/cs301/reference/x86_64.html)
4- [OS X -x64 stack not 16 byte aligned</br>](https://stackoverflow.com/questions/43354658/os-x-x64-stack-not-16-byte-aligned-error)
5- [Why do C compilers prepend underscores to external names?</br>](https://stackoverflow.com/questions/2627511/why-do-c-compilers-prepend-underscores-to-external-names)
6- [lectures on assembly</br>](https://www.cs.uaf.edu/2017/fall/cs301/lecture/)
7- [Inconsistent strcmp() return value when passing strings as pointers or as literals</br>](https://stackoverflow.com/questions/27751221/inconsistent-strcmp-return-value-when-passing-strings-as-pointers-or-as-litera)
8- [Options Controlling C Dialect</br>](https://gcc.gnu.org/onlinedocs/gcc-4.2.2/gcc/C-Dialect-Options.html)
# How to set intel syntax in lldb
```
$> touch ~/.lldbinit
$> echo "settings set target.x86-disassembly-flavor intel" > ~/.lldbinit
```
# Useful lldb commands
- memory read (read from an adrress). 
- register read (you can specify format with --format, use command 'help format' for available format). 
# How to compile
run make it will generate the library, then compile main.c using library
```
gcc main.c -L . -lasm
```
