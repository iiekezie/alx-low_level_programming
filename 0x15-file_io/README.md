# Project: File I/O in C

Full Stack Software Engineering studies at **ALX LOW LEVEL PROGRAMMING School**. It aims to learn about File I/O in C - Project in **C language**.

# This project consists of several C programs that involve **file I/O operations**. The programs perform tasks like reading a text file, creating a file, appending text to a file, and displaying information from the ELF header of an ELF file. Below is a table that summarizes each program in the project:


## Project Details

- **Author:** Ifeanyi I Ekezie


| Prototype                        | Description                                | File Name                  |
|----------------------------------|--------------------------------------------|----------------------------|
| `ssize_t read_textfile(const char *filename, size_t letters);` | Reads and prints a text file to the POSIX standard output. | `0-read_textfile.c` |
| `int create_file(const char *filename, char *text_content);` | Creates a file with specified text content. | `1-create_file.c` |
| `int append_text_to_file(const char *filename, char *text_content);` | Appends text to the end of a file. | `2-append_text_to_file.c` |
| `int copy_file(const char *file_from, const char *file_to);` | Copies the content of one file to another. | `3-cp.c` |
| `int display_elf_header(const char *filename);` | Displays information from the ELF header of an ELF file. | `100-elf_header.c` |

## How to Compile

To compile the programs, use the provided `gcc` command with the appropriate source files. For example:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-read_textfile.c -o read_textfile
```

## Usage

- For the program `read_textfile`, you can run it with `./read_textfile filename letters`, where `filename` is the name of the file to read and `letters` is the number of letters to read and print.
- For the program `create_file`, you can run it with `./create_file filename text_content`, where `filename` is the name of the file to create and `text_content` is the content to write to the file.
- For the program `append_text_to_file`, you can run it with `./append_text_to_file filename text_content`, where `filename` is the name of the file to which text should be appended, and `text_content` is the text to append.
- For the program `copy_file`, you can run it with `./copy_file file_from file_to`, where `file_from` is the source file and `file_to` is the destination file.
- For the program `display_elf_header`, you can run it with `./display_elf_header filename`, where `filename` is the name of the ELF file.

**Note**: Ensure that you have the necessary permissions and provide valid file paths.

## Requirements

- All files will be compiled on Ubuntu 20.04 LTS using `gcc` with the specified options.
- The code should follow the Betty style.
- No global variables should be used.
- Each source file should have no more than 5 functions.
- Only the C standard library functions `malloc`, `free`, and `exit` are allowed.
- Allowed system calls are `read`, `write`, `open`, and `close`.
- The header file `main.h` should include the prototypes of all functions, including `_putchar`.
- Symbolic constants should be preferred over numeric values.
- The provided test main files can be used for testing the functions.
