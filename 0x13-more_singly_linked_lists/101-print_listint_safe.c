#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/*
 * File: 101-print_listint_safe.c
 * Auth: Ifeanyi I Ekezie
 */

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: A pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head);
{
	const listint_t *slow_node = NULL;
	const listint_t *l_n = NULL;
	size_t count = 0;
	size_t new_node1;

	slow_node = head;
	while (slow_node)
	{
		printf("[%p] %d\n", (void *)slow_node, slow_node->n);
		count++;
		slow_node = slow_node->next;
		l_n = head;
		new_node1 = 0;
		while (new_node1 < count)
		{
			if (slow_node == l_n)
			{
				printf("-> [%p] %d\n", (void *)slow_node, slow_node->n);
				return (count);
			}
			l_n = l_n->next;
			new_node1++;
		}
		if (!head)
			exit(98);
	}
	return (count);
}
