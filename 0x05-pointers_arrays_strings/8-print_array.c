#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers
 * @a: array name
 * @n: is the number of elements the array
 * Return: a and n
 */

void print_array(int *a, int n)
{
int i;
int lenght;

lenght = n - 1;
i = 0;
while (i < lenght)
{
	printf("%d, ", a[i]);
	i++;
}
if (i == (lenght))
{
	printf("%d", a[lenght]);
}
printf("\n");
}
