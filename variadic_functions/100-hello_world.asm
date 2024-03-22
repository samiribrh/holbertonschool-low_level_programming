section .data
	msg db "Hello, World!", 0xA
	msg_len equ $ - msg

global main

section .text

main:
	mov rax, 1
	mov rdi, 1
	mov rsi, msg
	mov rdx, msg_len
	syscall

	mov rax, 60
	xor rdi, rdi
	syscall
