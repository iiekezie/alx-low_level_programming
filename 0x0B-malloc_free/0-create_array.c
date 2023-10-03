#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars and initializes it with a specific char,
 * and initializes it with a specific char
 * @size: the size of the array
 * @c: the character to initialize the array with
 *
 * Return: pointer to the created array, or NULL if size is 0 or if memory allocation fails
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';

	return (p);
}
