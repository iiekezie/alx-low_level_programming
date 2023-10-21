section .data
  hello db "Hello, Holberton", 10  ; The string to be printed, followed by a newline character
  hello_len equ $ - hello           ; Calculate the length of the string

section .text
  global _start

_start:
  ; Call printf
  mov rdi, hello                  ; Format string pointer
  mov rax, 0                      ; Clear RAX (no xmm registers used)
  call printf

  ; Exit the program
  mov rax, 60                     ; syscall number for exit
  xor rdi, rdi                    ; Exit status: 0
  syscall

section .bss
  section .text
    extern printf
