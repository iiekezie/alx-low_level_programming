#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @p: Memory Area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the Memory Area p
 */
char *_memset(char *p, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		p[i] = b;
	}

	return (p);
}
