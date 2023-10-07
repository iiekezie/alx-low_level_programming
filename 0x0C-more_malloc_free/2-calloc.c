/*
 * File: 2-calloc.c
 * Auth: Ifeanyi I Ekezie
 */

#include "main.h"
#include <stdlib.h>

/**
* _calloc - Allocates memory for an array, using malloc.
*@nmemb : The number of elements.
*@size : char that it is a an int
* Return: A pointer to the allocated memory.
*         If nmemb or size is 0 or if malloc fails, return NULL.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;
	unsigned int sizetotal;
/*generales conditionales given*/
	if (nmemb == 0 || size == 0)
		return (NULL);
/*nmemb is n * size (formula)*/
	sizetotal = nmemb * size;

/*call malloc*/
	p = malloc(sizetotal);

	if (p == NULL)
		return (NULL);
/*populate size*/
/*nmemb will be filled the 98 big box each one divide in * char*/
	for (i = 0; i < sizetotal; i++)
	{
		p[i] = 0;
	}

return (p);
}
