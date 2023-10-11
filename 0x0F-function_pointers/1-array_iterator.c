/*
 * File: 1-array_iterator.c
 * Auth: Ifeanyi I Ekezie
 */

#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - Executes a function on each element of an array
 * @array: The array to process
 * @size: The size of the array
 * @action: A pointer to the function to be executed on each element
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
