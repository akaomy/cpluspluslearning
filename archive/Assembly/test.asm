section .data
    hello db 'Hello, World!',0    ; The string to print

section .text
    global _start

_start:
    ; Write "Hello, World!" to the console
    mov rax, 1                  ; syscall: write
    mov rdi, 1                  ; file descriptor: stdout
    mov rsi, hello              ; address of string to output
    mov rdx, 13                 ; number of bytes
    syscall                     ; call kernel

    ; Exit program
    mov rax, 60                 ; syscall: exit
    xor rdi, rdi                ; exit code 0
    syscall                     ; call kernel
