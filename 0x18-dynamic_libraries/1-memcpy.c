#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: destination memory area
 * @src: memory area to copy from
 * @c: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int c)
{
	unsigned int i;

	for (i = 0; i < c; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
