#include "lists.h"

/*
 * File: 6-pop_listint.c
 * Auth: Ifeanyi I Ekezie
 */

/**
 * pop_listint - Deletes the head node of a listint_t list
 * @head: Pointer to a pointer to the head of the list
 *
 * Return: The head node’s data (n),
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num = 0;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
