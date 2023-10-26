/**
 * File: 102-free_listint_safe.c
 * Auth: Ifeanyi I. Ekezie
 */

#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: A pointer to a pointer to the head of the list.
 *
 * Return: The number of nodes freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	while (current)
	{
		count++;
		temp = current;
		current = current->next;
		free(temp);
		if (temp < current)
			break;
	}

	*h = NULL;
	return (count);
}
