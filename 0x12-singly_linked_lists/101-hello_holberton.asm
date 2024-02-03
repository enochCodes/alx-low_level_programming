section .data
    hello db "Hello, Holberton", 0

section .text
    global _start

_start:
    ; Write the string to stdout using printf
    mov rdi, hello
    call printf

    ; Exit the program
    mov rdi, 0
    call exit

section .bss
    ; Reserve space for printf to store its internal data
    resb 8
