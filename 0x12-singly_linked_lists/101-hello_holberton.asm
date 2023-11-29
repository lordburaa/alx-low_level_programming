section .data
	hello db 'Hello, Holberton', 0

section .text
	globla _start

_start:
	mov eax, 4
	mov ebx, 2
	mov ecx, hello
	mov edx, 16
	
	mov eax, 1
	xor ebx, ebx
