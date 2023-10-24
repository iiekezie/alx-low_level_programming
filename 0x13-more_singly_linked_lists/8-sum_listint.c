#include "lists.h"

/*
 * File: 8-sum_listint.c
 * Auth: Ifeanyi I Ekezie
 */

#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t list.
 * @head: Pointer to the head of the list
 *
 * Return: The sum of all the data (n) or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
