#include "lists.h"
#include <stdio.h>

/*
 * File: 1-list_len.c
 * Auth: Ifeanyi I Ekezie
 */

/**
 * list_len - Returns the number of elements
 *               in a linked list_t list.
 * @hd: Pointer to the head of the list.
 *
 * Return: The number of n in the list.
 */
size_t list_len(const list_t *hd)
{
	size_t n = 0;

	while (hd)
	{
		n++;
		hd = hd->next;
	}

	return (n);
}
