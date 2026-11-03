.intel_syntax noprefix
.section .rdata
message:
    .asciz "Hello to 304 from Adrian Chnvanya, number 29, group M03-104BV-26!"
.text
.globl main
.extern puts
main:
    sub rsp, 40
    lea rcx, [rip + message]
    call puts
    xor eax, eax
    add rsp, 40
    ret
