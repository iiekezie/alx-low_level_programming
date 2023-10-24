#include "lists.h"

/*
 * File: 9-insert_nodeint.c
 * Auth: Ifeanyi I Ekezie
 */

/**
 * insert_nodeint_at_index - Inserts a new node in a listint_t,
 * at a given position
 * @head: Pointer to a pointer to the head of the list
 * @idx: The index at which the new node should be added
 * @n: Value for the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; temp != NULL && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
