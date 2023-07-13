#include "main.h"
#include <stdlib.h>
/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocat
 * @old_size: size in bytes of the allocated space of pointer.
 * @new_size: new size in bytes *
 * Return: ptr
 * if new_size == old_size, returns ptr without changes.
 * if malloc fails, returns NULL.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	/* New size creation */
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}

	/* check for failure creation */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}

