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

	while (count < n--)
	{
		check = a[count];
		a[count] = a[n];
		a[n] = check;
		count++;

	}
}
