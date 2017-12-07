section .text
global _ft_memalloc
extern _ft_memset
extern _malloc

_ft_memalloc:

.main:
	push rdi
	call _malloc
	pop rdi
	cmp rax, 0
	jmp .ko
	mov rdx, rdi
	mov rdi, rax
	mov rsi, 0
	call _ft_memset
	ret
.ko:
	mov rdi, -1
	mov rax, 0x2000001
	syscall
	ret
