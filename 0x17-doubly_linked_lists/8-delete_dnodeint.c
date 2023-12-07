#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 *                            at a given index.
 * @head: pointer to the head of the list.
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded
 *         Otherwise - -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *new_node = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (new_node == NULL)
			return (-1);
		new_node = new_node->next;
	}

	if (new_node == *head)
	{
		*head = new_node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		new_node->prev->next = new_node->next;
		if (new_node->next != NULL)
			new_node->next->prev = new_node->prev;
	}

	free(new_node);
	return (1);
}
