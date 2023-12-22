#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: Size of the array.
 *
 * Return: A pointer to the newly created hash table, 
 *         Otherwise - NULL if failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *nt;
	unsigned long int i;

	nt = malloc(sizeof(hash_table_t));
	if (nt == NULL)
		return (NULL);

	nt->size = size;
	nt->array = malloc(sizeof(hash_node_t *) * size);
	if (nt->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		nt->array[i] = NULL;

	return (nt);
}
