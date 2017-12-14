section .text
global _ft_memalloc
extern _ft_memset
extern _ft_m

_ft_memalloc:

.main:
	call _ft_m
	mov rdx, rdi
	mov rdi, rax
	mov rsi, 0
	call _ft_memset
	ret
