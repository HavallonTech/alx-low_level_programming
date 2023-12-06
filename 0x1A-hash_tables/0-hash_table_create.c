#include "hash_tables.h"
/**
 * hash_table_create - function that create a hash table
 * @size: the size of the hash table
 *
 * Return: the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int counter;

	hash_table_t *nwtable;

	nwtable = malloc(sizeof(hash_table_t));

	if (nwtable == NULL)
		return (NULL);

	nwtable->size = size;
	nwtable->array = malloc(sizeof(hash_node_t *) * size);

	if (nwtable->array == NULL)
	{
		free(nwtable);
		return (NULL);
	}
	while (counter < size)
	{
		/*initializing our newtable array*/
		nwtable->array = NULL;
		counter += 1;
	}

	return (nwtable);
}
