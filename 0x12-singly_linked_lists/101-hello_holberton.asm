section .data
    fmt db 'Hello, Holberton', 10, 0  ; Format string with newline

section .text
    extern printf      ; Declare printf as an external function
    global main        ; Make main available for linking

main:
    ; Prepare arguments for printf
    mov rdi, fmt       ; First argument: format string (address of fmt)

    ; Call printf
    call printf

    ; Exit the program
    mov rax, 60        ; syscall: exit
    xor rdi, rdi       ; status: 0
    syscall

