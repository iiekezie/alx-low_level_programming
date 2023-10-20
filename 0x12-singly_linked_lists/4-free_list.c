#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/*
 * File: 4-free_list.c
 * Auth: Ifeanyi I Ekezie
 */

/**
 * free_list - function Frees a list_t list.
 *@head: A pointer to the head of the list.
 * Return: nothing
 */

void free_list(list_t *head);
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);

	}
}
