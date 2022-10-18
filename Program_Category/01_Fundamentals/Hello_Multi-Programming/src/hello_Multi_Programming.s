.data
.globl greet
greet:
.string "hello Mutil Programming"

.text
.global main
main:
    pushq   %rbp
    movq    %rsp,       %rbp
    movq    $greet,     %rdi
    call    puts
    movq    $0,         %rax
    leave
    ret
