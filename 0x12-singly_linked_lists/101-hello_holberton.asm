section .data
	fmt     db "%s",17,0
	msg1    db "Hello, Holberton\n",0

section .text
	extern printf
	global _start

_start:
	mov  edx, msg1
	mov  esi, 1
	mov  edi, fmt
	mov  eax, 0
	call printf

	mov  ebx, 0
	mov  eax, 1
	int  0x80
