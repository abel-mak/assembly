global _ft_strlen

segment .text

_ft_strlen:
	mov rax, 0
	cmp byte [rdi], 0
	jne inc_rax	
	ret

inc_rax:
	add rax, 1
	add rdi, 1
	cmp byte [rdi], 0
	jne inc_rax
	ret
