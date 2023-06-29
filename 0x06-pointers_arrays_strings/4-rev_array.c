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

	count = 0
	while (count < n--)
	{
		check = a[count];
		a[count] = a[n];
		a[n] = check;
		count++;

	}
/*
*8
*8	for (i = 0; i < n--; i+}
*{
*		t = a[i];
*		a[i] = a[n];
*		a[n] = t;
*	}
*}
*/
}
