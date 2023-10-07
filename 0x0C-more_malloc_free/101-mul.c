/*
 * File: 100-realloc.c
 * Auth: Ifeanyi I Ekezie
 */

#include "main.h
#include <stdlib.h>
#include <stdio.h>

/**
<<<<<<< HEAD
 * Error - prints Error str.
 *
 * Return: Error and new line.
 */
void Error(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}
/**
 * allDigits - checks if all the characters are digits.
 * @arg: the arguments of program.
 * Return: 1 all digits 0 otherwise.
 */
int allDigits(char **arg)
{
	int i, j;

	for (i = 1; i <= 2; i++)
		for (j = 0; arg[i][j]; j++)
		{
			if (arg[i][j] < '0' || arg[i][j] > '9')
				return (0);
		}
	return (1);
=======
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
>>>>>>> 3ef43af626f5b3a366b51b194852489a8865792d
}

/**
<<<<<<< HEAD
 * _calloc- initializes memory spaces with zero.
 * @nmemb: string 1.
 * @size: string 2, concatenated to 1
 *
 * Return: pointer to the concatenated string.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *newArray;

	if (nmemb == 0 || size == 0)
		return (NULL);

	newArray = malloc(nmemb * size);
	if (newArray == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		*(newArray + i) = 0;

	return (newArray);
=======
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
>>>>>>> 3ef43af626f5b3a366b51b194852489a8865792d
}

/**
<<<<<<< HEAD
 * main- multiplies 2 positive numbers.
 * @argc: counter of arguments.
 * @argv: vector of arguments
 * Return: ans or Error.
 */

int main(int argc, char **argv)
{
	int i, j, carry, len, len_s1 = 0, len_s2 = 0;
	char *s1 = *(argv + 1), *s2 = *(argv + 2);
	int *a, *b, *ans;

	if (argc != 3 || allDigits(argv) != 1)
		Error();
	if (*s1 == '0' || *s2 == '0')
		_putchar('0');
	while (*(*(argv + 1) + len_s1))
		len_s1++;
	while (*(*(argv + 2) + len_s2))
		len_s2++;
	len = len_s1 + len_s2 + 1;
	a = (int *) malloc(len_s1 * sizeof(int));
	b = (int *) malloc(len_s2 * sizeof(int));
	ans = _calloc(len, sizeof(int));
	if (a == NULL || b == NULL || ans == NULL)
		Error();
	for (i = len_s1 - 1, j = 0; i >= 0; i--, j++)
		*(a + j) = *(s1 + i) - '0';
	for (i = len_s2 - 1, j = 0; i >= 0; i--, j++)
		*(b + j) = *(s2 + i) - '0';
	for (i = 0; i < len_s2; i++)
		for (j = 0; j < len_s1; j++)
			*(ans + i + j) = *(ans + i + j) + *(b + i) * *(a + j);
	for (i = 0; i < len_s1 + len_s2; i++)
	{
		carry = *(ans + i) / 10, *(ans + i) = *(ans + i) % 10;
		*(ans + i + 1) = *(ans + i + 1) + carry; }
	for (i = len_s1 + len_s2; i >= 0; i--)
		if (*(ans + i) > 0)
			break;
	for (; i >= 0; i--)
		_putchar(*(ans + i) + '0');
	_putchar('\n');
	free(a), free(b), free(ans);
=======
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
>>>>>>> 3ef43af626f5b3a366b51b194852489a8865792d
	return (0);
}
