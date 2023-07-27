section .data
    hello_msg db 'Hello, Holberton', 10, 0   ; New line added after the message
    fmt db '%s', 10, 0                     ; Format string for printf

section .text
    global main
    extern printf

main:
    ; Call printf function
    mov rdi, fmt           ; First argument (format string)
    mov rsi, hello_msg     ; Second argument (message string)
    xor rax, rax           ; Clear RAX for vararg count (no additional args)
    call printf

    ; Exit the program
    xor eax, eax           ; syscall: sys_exit
    ret                    ; Return from the main function
