
# Project: 0x17. C - Doubly Linked Lists

This project involves working with doubly linked lists in C. The tasks include implementing various operations such as printing the list, finding the length of the list, adding nodes at the beginning and end, freeing the list, getting a node at a specific index, calculating the sum of the list, inserting a node at a given index, and deleting a node at a given index. Additionally, there are advanced tasks involving password cracking and key generation.


This project is about creating and manipulating doubly linked lists in C. A doubly linked list is a data structure that consists of a sequence of nodes, each containing an integer value and two pointers to the previous and next nodes. The project aims to implement various operations on doubly linked lists, such as printing, counting, adding, deleting, searching, and reversing nodes. The project also tests the understanding and application of the Betty coding style, the use of header files, and the use of malloc and free functions. The project is based on the tasks and requirements provided by **ALX Software Engineerung.**The source code is available on GitHub at [alx-low_level_programming/0x17-doubly_linked_lists].

## Table of Contents

1. [Project Overview](#project-overview)
2. [Technologies](#technologies)
3. [Requirements](#requirements)
4. [Directory Structure](#directory-structure)
5. [Tasks](#tasks)
   - [C Scripts](#c-scripts)
      - [Task 0: Print list](#0-print-dlistintc)
      - [Task 1: List length](#1-dlistint-lenc)
      - [Task 2: Add node](#2-add-dnodeintc)
      - [Task 3: Add node at the end](#3-add-dnodeint-endc)
      - [Task 4: Free list](#4-free-dlistintc)
      - [Task 5: Get node at index](#5-get-dnodeint-at-indexc)
      - [Task 6: Sum list](#6-sum-dlistintc)
      - [Task 7: Insert at index](#7-insert-dnodeintc)
      - [Task 8: Delete at index](#8-delete-dnodeintc)
   - [Advanced Tasks](#advanced-tasks)
      - [Task 100: Crackme4](#100-password)
      - [Task 102: Palindromes](#102-result)
      - [Task 103: crackme5](#103-keygenc)
6. [Author](#author)

---

## Technologies

- C programming language
- Ubuntu 20.04 LTS
- Vi, Vim, Emacs (Allowed editors)
- Betty style
- Valgrind for memory checks

## Requirements

### General

- All files will be interpreted/compiled on Ubuntu 20.04 LTS using Python3 (version 3.8.5).
- All files should end with a new line.
- A README.md file, at the root of the project folder, is mandatory.
- Code should follow the Betty style and will be checked using betty-style.pl and betty-doc.pl.
- No global variables are allowed.
- No more than 5 functions per file.
- The only C standard library functions allowed are `malloc`, `free`, `printf`, and `exit`.
- Prototypes of all functions should be included in the header file called `lists.h`.
- Don't forget to push your header file.
- All header files should be include guarded.

## Directory Structure

```
0x17-doubly_linked_lists/
|-- 0-print_dlistint.c
|-- 1-dlistint_len.c
|-- 2-add_dnodeint.c
|-- 3-add_dnodeint_end.c
|-- 4-free_dlistint.c
|-- 5-get_dnodeint_at_index.c
|-- 6-sum_dlistint.c
|-- 7-insert_dnodeint.c
|-- 8-delete_dnodeint.c
|-- 100-password
|-- 102-result
|-- 103-keygen.c
|-- lists.h
|-- README.md
```

## Tasks

### C Scripts

| Task Number | File Name                | Description                             | Prototype                                      |
|-------------|--------------------------|-----------------------------------------|------------------------------------------------|
| 0           | 0-print_dlistint.c       | Print all elements of a doubly linked list | `size_t print_dlistint(const dlistint_t *h);`   |
| 1           | 1-dlistint_len.c         | Return the number of elements in a linked list | `size_t dlistint_len(const dlistint_t *h);`   |
| 2           | 2-add_dnodeint.c         | Add a new node at the beginning of a list | `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`   |
| 3           | 3-add_dnodeint_end.c     | Add a new node at the end of a list      | `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`   |
| 4           | 4-free_dlistint.c        | Free a doubly linked list               | `void free_dlistint(dlistint_t *head);`   |
| 5           | 5-get_dnodeint_at_index.c| Get the nth node of a list              | `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`   |
| 6           | 6-sum_dlistint.c         | Sum all elements of a list              | `int sum_dlistint(dlistint_t *head);`   |
| 7           | 7-insert_dnodeint.c      | Insert a new node at a given position   | `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`   |
| 8           | 8-delete_dnodeint.c      | Delete a node at a given index          | `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`   |


## Author :black_nib:

* **Ifeanyi I Ekezie** <[iiekezie](https://github.com/iiekezie)>
