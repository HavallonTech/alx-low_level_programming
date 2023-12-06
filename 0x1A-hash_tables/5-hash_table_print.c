#include "hash_tables.h"
/**
 * hash_table_print - printing the hash table
 * @ht: the hash table to be printed
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int key_index;
	hash_node_t *current;
	int k = 0;

	if (ht ==  NULL || ht->size == 0)
	{
		return;
	}

	/*transversing the Hash table and print it out */

	printf("{");
	for (key_index = 0; key_index < ht->size; key_index++)
	{
		current = ht->array[key_index];
		while (current != NULL)
		{
			if (k == 1)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			k = 1;
			current = current->next;
		}
	}
	printf("}");
	printf("\n");

}
