/*
 * File: 2-int_index.c
 * Auth: Ifeanyi i Ekezie
 */

#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array using a comparison function.
 * @array: The array to search.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the comparison function.
 *
 * Return: Index of the first element for which cmp function does not return 0.
 *         Otherwise - If no element matches, return -1.
 *                     If size is less than or equal to 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (!array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
