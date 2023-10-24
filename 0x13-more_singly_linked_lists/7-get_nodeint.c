#include "lists.h"

/*
 * File: 7-get_nodeint.c
 * Auth: Ifeanyi I Ekezie
 */

/**
 * get_nodeint_at_index - Returns the nth node of
 *                        a listint_t list.
 * @head: Pointer to the head of the list
 * @index: The index of the node to return
 *
 * Return: The nth node of the list,
 *         Otherwise - or NULL if it doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	for (count = 0; count < index; count++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
