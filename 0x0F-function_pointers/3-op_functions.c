/*
 * File: 3-op_functions.c
 * Auth: Ifeanyi I Ekezie
 * Desc: Write a Header file containing all structures and
 *       prototypes used by the 3-main.c program.
 */

#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two numbers (a and b).
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: Result of addition.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b.
 * @a: First integer.
 * @b: TSecond integer.
 *
 * Return: Result of subtraction.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: Result of multiplication.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of a by b.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: Result of division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: Result of modulo operation.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
