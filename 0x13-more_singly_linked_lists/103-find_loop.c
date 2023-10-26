#include "lists.h"

/*
 * File: 103-find_loop.c
 * Auth: Ifeanyi I Ekezie
 */

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	if (!head || !head->next)
		return (NULL); /* No loop can exist with 0 or 1 node */

	tortoise = head->next; /* Move one step */
	hare = head->next->next; /* Move two steps */

	while (tortoise != hare)
	{
		if (!hare || !hare->next)
			return (NULL); /* No loop if hare reaches the end */

		tortoise = tortoise->next; /* Move one step */
		hare = hare->next->next; /* Move two steps */
	}

	/* Loop detected, reset tortoise to head */
	tortoise = head;

	while (tortoise != hare)
	{
		tortoise = tortoise->next;
		hare = hare->next;
	}

	return (tortoise); /* Return the node where the loop starts */
}
