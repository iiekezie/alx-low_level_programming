#include <stdlib.h>
#include <string.h>
#include "lists.h"

/*
 * File: 3-add_node_end.c
 * Auth: Ifeanyi I Ekezie
 */

/**
 * add_node_end - dds a new node at the end of a list.
 * @head: pointer to pointer to head.
 * @str: string
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new;

	return (new);
}
