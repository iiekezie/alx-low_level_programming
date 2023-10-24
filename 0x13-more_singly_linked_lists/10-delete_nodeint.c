#include "lists.h"

/*
 * File: 10-delete_nodeint.c
 * Auth: Ifeanyi I Ekezie
 */

/**
 * delete_nodeint_at_index - Deletes the node at a given index.
 * @head: Pointer to a pointer to the head of the list.
 * @index: The index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *curr = NULL;
	unsigned int node;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (node < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		node++;
	}


	curr = temp->next;
	temp->next = curr->next;
	free(curr);

	return (1);
}
