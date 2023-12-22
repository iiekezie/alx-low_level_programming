# Project: 0x1A. C - Hash tables

This project involves implementing hash tables in C, covering topics such as hash functions, collision handling, and the basic operations of creating, setting, getting, printing, and deleting elements from a hash table. The project also introduces an advanced task involving the implementation of a sorted hash table.


# Project: Hash Tables

## Table of Contents

1. [Project Overview](#project-overview)
2. [Technologies](#technologies)
3. [Requirements](#requirements)
    - [General](#general)
    - [Directory Structure](#directory-structure)
4. [Tasks](#tasks)
    - [Task 0: hash_table_create](#task-0-hash_table_create)
    - [Task 1: hash_djb2](#task-1-hash_djb2)
    - [Task 2: key_index](#task-2-key_index)
    - [Task 3: hash_table_set](#task-3-hash_table_set)
    - [Task 4: hash_table_get](#task-4-hash_table_get)
    - [Task 5: hash_table_print](#task-5-hash_table_print)
    - [Task 6: hash_table_delete](#task-6-hash_table_delete)
    - [Task 7: Sorted Hash Tables](#task-7-sorted-hash-tables)
4. [Author] black_nib:

## Technologies
- C programming language
- Ubuntu 20.04 LTS
- GCC compiler

## Requirements

### General
- Allowed editors: vi, vim, emacs
- All files compiled on Ubuntu 20.04 LTS using gcc with options -Wall -Werror -Wextra -pedantic -std=gnu89
- All files should end with a new line
- A README.md file at the root of the project folder is mandatory
- Code should use the Betty style; checked using betty-style.pl and betty-doc.pl
- No global variables allowed
- No more than 5 functions per file
- C standard library is allowed
- Prototypes of all functions should be included in the header file named hash_tables.h
- Push the header file to the repository
- All header files should be include guarded

### Data Structures
The project uses the following data structures:
```c
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
```

## Directory Structure
```
0x1A-hash_tables/
│
├── 0-hash_table_create.c
├── 1-djb2.c
├── 2-key_index.c
├── 3-hash_table_set.c
├── 4-hash_table_get.c
├── 5-hash_table_print.c
├── 6-hash_table_delete.c
├── 100-sorted_hash_table.c
├── hash_tables.h
└── README.md
```

## Tasks

| Task Number | File Name                   | Description                                     | Prototype                                | Prototype                                |
|-------------|-----------------------------|-------------------------------------------------|------------------------------------------|------------------------------------------|
| 0x1A        | 0-hash_table_create.c       | Create a hash table                             | `hash_table_t *hash_table_create(unsigned long int size);` | `hash_table_create(1024);` |
| 0x1A        | 1-djb2.c                    | Implement the djb2 hash function               | `unsigned long int hash_djb2(const unsigned char *str);` | `hash_djb2((unsigned char *)s);` |
| 0x1A        | 2-key_index.c               | Get the index of a key                          | `unsigned long int key_index(const unsigned char *key, unsigned long int size);` | `key_index((unsigned char *)s, hash_table_array_size);` |
| 0x1A        | 3-hash_table_set.c          | Add an element to the hash table                | `int hash_table_set(hash_table_t *ht, const char *key, const char *value);` | `hash_table_set(ht, "betty", "cool");` |
| 0x1A        | 4-hash_table_get.c          | Retrieve a value associated with a key          | `char *hash_table_get(const hash_table_t *ht, const char *key);` | `hash_table_get(ht, "python");` |
| 0x1A        | 5-hash_table_print.c        | Print a hash table                              | `void hash_table_print(const hash_table_t *ht);` | `hash_table_print(ht);` |
| 0x1A        | 6-hash_table_delete.c       | Delete a hash table                             | `void hash_table_delete(hash_table_t *ht);` | `hash_table_delete(ht);` |
| 0x1A        | 100-sorted_hash_table.c     | Implement sorted hash table using PHP approach  | `shash_table_t *shash_table_create(unsigned long int size);` | `shash_table_create(1024);` |
| 0x1A        | 100-sorted_hash_table.c     | Implement sorted hash table using PHP approach  | `int shash_table_set(shash_table_t *ht, const char *key, const char *value);` | `shash_table_set(ht, "y", "0");` |
| 0x1A        | 100-sorted_hash_table.c     | Implement sorted hash table using PHP approach  | `char *shash_table_get(const shash_table_t *ht, const char *key);` | `shash_table_get(ht, "python");` |
| 0x1A        | 100-sorted_hash_table.c     | Implement sorted hash table using PHP approach  | `void shash_table_print(const shash_table_t *ht);` | `shash_table_print(ht);` |
| 0x1A        | 100-sorted_hash_table.c     | Implement sorted hash table using PHP approach  | `void shash_table_print_rev(const shash_table_t *ht);` | `shash_table_print_rev(ht);` |
| 0x1A        | 100-sorted_hash_table.c     | Implement sorted hash table using PHP approach  | `void shash_table_delete(shash_table_t *ht);` | `shash_table_delete(ht);` |

## Prototype

### Task 0: Create a hash table

```c
hash_table_t *hash_table_create(unsigned long int size);
```

**Description:** Create a hash table.

- `size`: The size of the array.
- Returns a pointer to the newly created hash table.
- If something went wrong, the function should return NULL.

**Example:**
```c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    printf("%p\n", (void *)ht);
    return (EXIT_SUCCESS);
}
```

### Task 1: Implement the djb2 hash function

```c
unsigned long int hash_djb2(const unsigned char *str);
```

**Description:** Implement the djb2 hash function.

- `str`: The input string.
- Returns the hash value.

**Example:**
```c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

int main(void)
{
    char *s;

    s = "cisfun";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    s =

## Author :black_nib:

* **Ifeanyi I Ekezie** <[iiekezie](https://github.com/iiekezie)>
