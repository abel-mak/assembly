
global _ft_strcpy

segment .text

_ft_strcpy:
	mov rax, rdi; save rdi(dest) because we will return it
	cmp byte [rsi], 0 
	jne subcpy 
	mov byte [rdi], 0
	ret

subcpy:
	mov cl, [rsi] 
	mov [rdi], cl 
	add rdi, 1 
	add rsi, 1 
	cmp byte [rsi], 0 
	jne subcpy
	mov byte [rdi], 0 
	ret	
