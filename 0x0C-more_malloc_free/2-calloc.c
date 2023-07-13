#include "main.h"
#include <stdlib.h>
/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: number of elements of the array
 * @size: size of bytes to be allocated
 * Return: pointer to the allocated memory once complteted.
 * if nmemb or size is 0, returns NULL
 * if malloc fails, returns NULL and ends the program
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptrvar;
	unsigned int k;

/* If zero array index is expected with size 0 byte */
	if (nmemb == 0 || size == 0)
		return (NULL);

	ptrvar = malloc(nmemb * size);
/* If malloc alocation fails */
	if (ptrvar == NULL)
		return (NULL);
	k = 0;
	while (k < (nmemb * size))
	{
		ptrvar[k] = 0;
		k++;
	}

	return (ptrvar);
}

