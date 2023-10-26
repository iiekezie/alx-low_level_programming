#include "lists.h"
#include <stdlib.h>

/*
 * File: 102-free_listint_safe.c
 * Auth: Ifeanyi I Ekezie
 */

/**
 * free_listint_safe - Safely frees a listint_t list
 * @h: A pointer to the head of the list
 * Return: The size of the list that was freed
 */

size_t free_listint_safe(listint_t **h);
{
	listint_t *temp;
	size_t counter = 0;
	int differ;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		differ = *h - (*h)->next;
		if (differ > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			counter++;
		}
		else
		{
			free(*h);
			*h = NULL;
			counter++;
			break;
		}
	}

	*h = NULL;

	return (counter);
}
