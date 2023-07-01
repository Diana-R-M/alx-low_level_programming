global main
extern printf

section .text
main:
    mov edi, format
	xor rax, rax
    xor eax, eax
    call printf
	xor edx, edx
    mov eax, 0
    ret

section .data
format db "Hello, Holberton", 0
