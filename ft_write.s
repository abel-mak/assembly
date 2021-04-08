global _rw_error
global _ft_write
extern ___error

segment .text
 
_rw_error:
	push rax
	call ___error
	pop rcx
	mov [rax], rcx
	mov rax, -1
	ret

_ft_write:
	mov rax, 0x2000004
	syscall
	jc _rw_error
	ret
