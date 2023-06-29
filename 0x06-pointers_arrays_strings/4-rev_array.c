#include "main.h"
/**
 * reverse_array - a function that reverse array of integers
 * @a: array
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int count;
	int check;

	for(count = 0; count < n--; count++)
	{
		check = a[count];
		a[count] = a[n];
		a[n] = check;
	}
}
