/*
 * File: 2-int_index.c
 * Auth: Ifeanyi I Ekezie
 */

#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array using a comparison function
 * @array: The array of integers
 * @size: The number in the array
 * @cmp: A pointer to the comparison function
 * Return: The index of the frist matching element with `cmp`, or -1 if none found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
