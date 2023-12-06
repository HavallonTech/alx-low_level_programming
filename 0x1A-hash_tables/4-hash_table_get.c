#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the hash table
 * @key: key to search
 * Return: the value associated with key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int new_index;
	hash_node_t **array = NULL;
	hash_node_t *current_node;

		if (ht == NULL)
			return (NULL);

	/* compute the index of the key of the HT */
	new_index = key_index((const unsigned char *)key, ht->size);
	array = ht->array;
	current_node = array[new_index];

	/* Traverse through the linked list */
	while (current_node != NULL)
	{
		/* check if the current node's key matches the key provided */
		if (strcmp(current_node->key, key) == 0)
		{
			return (current_node->value);
		}
		current_node = current_node->next;
	}
	return (NULL);
}
