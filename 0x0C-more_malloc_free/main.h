#ifndef main_H
#define main_H

/**
 * File: main.h
 * Auth: Ifeanyi I. Ekezie
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x0C.C-more_malloc_free directory.
 */

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
