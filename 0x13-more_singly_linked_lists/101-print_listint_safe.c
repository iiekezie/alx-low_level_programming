#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	const listint_t *visited[1024]; /* Assuming a limit of 1024 unique nodes */
	size_t count = 0;
	size_t i;

	for (i = 0; i < 1024; i++)
		visited[i] = NULL;

	while (current != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (visited[i] == current)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				exit(98);
			}
		}

		visited[count++] = current;
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
	}

	return (count);
}
