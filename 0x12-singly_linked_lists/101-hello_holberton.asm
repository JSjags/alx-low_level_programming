section .data
    hello db "Hello, Holberton", 0
    fmt db "%s\n", 0

section .text
    global main

main:
    push rbp
    mov rbp, rsp

    push hello
    push fmt
    call printf
    add rsp, 16

    mov eax, 0
    pop rbp
    ret
