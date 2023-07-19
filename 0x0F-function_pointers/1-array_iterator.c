#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - a function that executes a function given
 * as a parameter on each element of an array.
 * @array: array
 * @size: The size of the emement to print
 * @action: pointer to be printed
 * Return: void type
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int count;

	count = 0;

	if (array == NULL || action == NULL)
		return;

	while (count < size)
	{
		action(array[count]);
		count++;
	}
}
