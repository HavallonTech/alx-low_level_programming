#include "function_pointers.h"
/**
 * int_index - Write a function that searches for an integer
 * @array: array of pointer
 * @size: size of elements in array to search
 * @cmp: pointer to function  of one of the 3 in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (count = 0; count < size; count++)
	{
		if (cmp(array[count]))
			/**count++;*/
			return (count);
	}
	return (-1);
}
