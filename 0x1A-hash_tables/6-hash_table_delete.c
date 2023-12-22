#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to be deleted.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *current = ht;
	hash_node_t *new_node, *temp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			new_node = ht->array[i];
			while (new_node != NULL)
			{
				temp = new_node->next;
				free(new_node->key);
				free(new_node->value);
				free(new_node);
				new_node = temp;
			}
		}
	}
	free(current->array);
	free(current);
}
