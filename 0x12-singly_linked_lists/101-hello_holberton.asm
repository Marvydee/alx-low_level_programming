section .data
    hello db "Hello, Holberton", 0

section .text
    global main
    extern printf

main:
    sub rsp, 8

    mov rdi, hello
    call printf

    add rsp, 8

    mov rax, 0
    ret

