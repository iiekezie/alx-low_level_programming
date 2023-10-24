#include "lists.h"
#include <stdlib.h>

/*
 * File: 4-free_listint.c
 * Auth: Ifeanyi I Ekezie
 */

/**
 * free_listint - Frees a listint_t list.
 * @head: Pointer to the head of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
