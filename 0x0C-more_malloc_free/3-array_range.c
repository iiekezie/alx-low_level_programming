/*
 * File: 3-array_range.c
 * Auth: Ifeanyi I Ekezie
 */

#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 *               from min to max, inclusive.
 * @min: The minimum value..
 * @max: The maximum value.
 *
 * Return: A pointer to the newly created array.
 *         Otherwise - If min > max or if malloc fails, return NULL.
 */
int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}
