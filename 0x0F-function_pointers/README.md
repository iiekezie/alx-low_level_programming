## 0x0F. C - Function pointers ##

Project done during **Full Stack Software Engineering studies** at **ALX LOW LEVEL PROGRAMMING School**. It aims to learn about C - Function Pointers Project in **C language**.

## Technologies
* Scripts written in Bash 4.3.11(1)
* C files are compiled using `gcc 4.8.4`
* C files are written according to the C90 standard
* Tested on Ubuntu 14.04 LTS
* You are allowed to use _putchar

### NOTE All the files within this Folder are made executable ###

## Files
All of the following files are scripts and programs written in C:

| Filename | Description | Prototype  |
| -------- | ----------- | ---------- |
| `0. What's my name` |Write a function that prints a name.| void print_name(char *name, void (*f)(char *)); |
| `1. If you spend too much time thinking about a thing, you'll never get it done` |Write a function that initialize a variable of type struct dog |void array_iterator(int *array, size_t size, void (*action)(int));|
| `2. To hell with circumstances; I create opportunities` | Write a function that searches for an integer. | int int_index(int *array, int size, int (*cmp)(int)); |
| `3. A goal is not always meant to be reached, it often serves simply as something to aim at` |  Define a new type dog_t as a new name for the type struct dog.| |
| `3-calc.h/3-op_functions.c/3-get_op_func.c/3-main.c` |This file should contain all the function prototypes and data structures used by the program. | int op_add(int a, int b); |
| `4. Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker` | Write a program that prints the opcodes of its own main function. Usage: ./main number_of_bytes |  |
