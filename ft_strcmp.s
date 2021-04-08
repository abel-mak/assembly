global _ft_strcmp

segment .text

endcmp:
	mov rcx, 0
	mov rdx, 0
	mov	cl, byte [rsi]
	mov dl, byte [rdi]
	sub edx, ecx
	mov eax, edx
	ret

_ft_strcmp:
	cmp byte [rdi], 0
	je endcmp
	cmp byte [rsi], 0
	je endcmp
	mov cl, byte [rdi]
	cmp byte [rsi], cl
	jne endcmp
	add rdi, 1
	add rsi, 1
	jmp _ft_strcmp
