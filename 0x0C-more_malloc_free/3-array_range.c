#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers
 * @min: minimum value for the integers
 *  @max: maximum value for the integers
 * Return: pointer to the newly created array
 * if man > mix, returns NULL
 * if malloc fails, returns NULL once its not created
 */
int *array_range(int min, int max)
{
	int *ptrvar;
	int k;	
	/* if there is no valid interger to be created for */
	if (min > max)
		return (NULL);

	ptrvar = malloc(sizeof(*ptrvar) * ((max - min) + 1));
	/** if memory creation fails */
	if (ptrvar == NULL)
		return (NULL);


	k = 0;

	while (min <= max)
	{
		ptrvar[k] = min;
		k++;
		min++;
	}

	return (ptrvar);
}

