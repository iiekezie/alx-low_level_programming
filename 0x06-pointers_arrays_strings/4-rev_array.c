#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * of integers.
 * @a: An array of integers.
 * @n: number of elements in the array.
 * Return: no return.
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = temp;
		}
	}
}
