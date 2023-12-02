#include "hash_tables.h"
/**
 * key_index - implementation of the key_index
 * @key: passing the hash value
 *@size: size of our array table
 *
 * Return: the key index of the hash value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	unsigned int my_key_index;
	unsigned long int hash;

	hash = hash_djb2(key);

	my_key_index = hash % size;

	return (my_key_index);
}
