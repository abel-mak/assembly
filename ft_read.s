global _ft_read
extern _rw_error

segment .text

_ft_read:
	mov rax, 0x2000003
	syscall
	jc _rw_error
	ret
