/*
 * File: 2-int_index.c
 * Auth: Ifeanyi I Ekezie
 */

#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array of integers.
 * @array: The array of integers
 * @size: The number in the array
 * @cmp: A pointer to the comparison function
 * Return: If no element matches or size <= 0 - -1.
 *         Otherwise - The index of the first element for which
 *                     the cmp function does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	/* function exist? if given */
	/* size <= 0 both return -1 */
	if (!cmp || !array || size <= 0)
		return (-1);
	/* find array size */
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0) /*referencing*/
			return (i); /*different of 0*/
	/*referenging and compare with cmp*/

	}
	return (-1); /* when it doesn't match return -1 */
}
