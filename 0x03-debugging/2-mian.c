#include <stdio.h>
#include "main.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
	int a;

	int b;

	int c;

	int largest;

	a = 972;
	b = -98;
	c = 0;

	largest = largest_number(int a, int b,int c);
	
	printf("%d is the largest number\n", largest);
	
	return (0);
}
