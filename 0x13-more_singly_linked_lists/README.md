## 0x13. C - More singly linked lists ##

This project was undertaken as part of the comprehensive Full Stack Software Engineering curriculum at **ALX LOW LEVEL PROGRAMMING School**. Its primary objective was to advance proficiency in C programming, with a particular focus on the implementation of singly linked lists in the **C language**. 

## Technologies
* Scripts written in Bash 4.3.11(1)
* C files are compiled using `gcc 4.8.4`
* C files are written according to the C90 standard
* Tested on Ubuntu 14.04 LTS

## Files
All of the following files are scripts and programs written in C:

|Task			|Description		|File Name	 | Prototype		|
| ------------------- 	| --------------------- |--------------- |--------------------- |	
| `0x13. C - More singly linked lists` | Advanced data structure and algorithm exercises | N/A | `N/A` | 
| `0. Print list` | Print all elements of a listint_t list | 0-print_listint.c | `size_t print_listint(const listint_t *h);` |
| `1. List length` | Returns the number of elements in a listint_t list	|1-listint_len.c | `size_t listint_len(const listint_t *h);` |
| `2. Add node` | Adds a new node at the beginning of a listint_t list |2-add_nodeint.c	 | `listint_t *add_nodeint(listint_t **head, const int n);` |
| `3. Add node at the end` | Adds a new node at the end of a listint_t list | 3-add_nodeint_end.c | `listint_t *add_nodeint_end(listint_t **head, const int n);` |
| `4. Free list` | Frees a listint_t list | 4-free_listint.c | `void free_listint(listint_t *head);` |
| `5. Free` | Frees a listint_t list and sets the head to NULL | 5-free_listint2.c | `void free_listint2(listint_t **head);` |
| `6. Pop` | Deletes the head node of a listint_t list and returns its data| `6-pop_listint.c |	int pop_listint(listint_t **head);` |
| `7. Get node at index` | Returns the nth node of a listint_t list | 7-get_nodeint.c | `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);` |
| `8. Sum list` | Returns the sum of all data in a listint_t list | 8-sum_listint.c | `int sum_listint(listint_t *head);` |
| `9. Insert` |	Inserts a new node at a given position in the list | 9-insert_nodeint.c |  `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);` |
| `10. Delete at index` | Deletes the node at a given index in the list	| 10-delete_nodeint.c |	`int delete_nodeint_at_index(listint_t **head, unsigned int index);` |
| `11. Reverse list` | Reverses a listint_t list | 100-reverse_listint.c | `listint_t *reverse_listint(listint_t **head);` |
| `12. Print (safe version)` | Prints a listint_t list safely |	100-print_listint_safe.c | `size_t print_listint_safe(const listint_t *head); `|

## Each task has its description, corresponding file name, and the prototype of the function to be implemented.

### Authors
* **Ifeanyi Ekezie** - [iiekeze@gmail.com](https://github.com/iiekezie)
