#include "hash_tables.h"

/**
 * hash_table_delete - Function that frees and deletes a hash
 * @ht: Table to be freed and deleted
 * Return: Void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int key_index;
	hash_node_t *current, *temp;

	for (key_index = 0; key_index < ht->size; key_index++)
	{
		current = ht->array[key_index];

		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(temp->value);
			free(temp->key);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
