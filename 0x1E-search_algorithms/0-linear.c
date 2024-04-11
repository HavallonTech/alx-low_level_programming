#include "search_algos.h"
/**
 * linear_search - searching for a value using the Linear search algorithm
 * @array: pointer to the first element of the array
 * @size: the number of elements in the array
 * @value: the value we search for
 *
 * Return: the index of the matched value or -1 if no match
 */

int linear_search(int *array, size_t size, int value){
	size_t k;

	if (array == NULL)
		return 1;
	for (k = 0; k < size; k++)
	{
		printf("Value checked array[%ld] = [%d]\n", k, array[k]);
		if (value == array[k])
			return k;
	}
	return -1;
}
