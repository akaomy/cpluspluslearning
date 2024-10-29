section .data

section .text

_start:
    ;int y
    ;int x = (y + 4) * 3;

    mov eax, y      ;move y to EAX register
    add eax,  4     ;add 4 to EAX register
    mov ebx, 3      ;move 3 to EBX register
    imul ebx        ;multiply EAX by EBX - signed operation of two operands
    mov x, eax      ;move EAX to X