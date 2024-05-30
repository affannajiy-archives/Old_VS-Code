section .data
    hello db 'Hello, World!', 0x0A  ; The string to be printed with a newline character at the end
    hello_len equ $ - hello         ; The length of the string

section .bss
    ; Uninitialized data section (not used in this example)

section .text
    global _start

_start:
    ; Write the message to the console
    mov eax, 4           ; syscall number for sys_write
    mov ebx, 1           ; file descriptor 1 is stdout
    mov ecx, hello       ; pointer to the message
    mov edx, hello_len   ; message length
    int 0x80             ; call kernel

    ; Exit the program
    mov eax, 1           ; syscall number for sys_exit
    xor ebx, ebx         ; exit code 0
    int 0x80             ; call kernel
