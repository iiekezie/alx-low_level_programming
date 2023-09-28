#include "main.h"

/**
* _sqrt_recursion - Computes the natural square root of a number
* @n: The input number
* Return: The natural square root of n, or -1 if n does not have a natural square root
**/
int _sqrt_recursion(int n)
{
return (natural_square(n, 1));

}

/**
* natural_square - a function that help to find natural_square
* @x: integer
* @y: integer
* Return: square root or -1
**/

int natural_square(int x, int y)
{
	int s = y * y;

	if (s > x)
		return (-1);
	if (s == x)
		return (y);
	return (natural_square(x, y + 1));
}
