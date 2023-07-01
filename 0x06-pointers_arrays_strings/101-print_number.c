#include "main.h"

/**
 * print_number - a function that print numbers chars
 * @n: The integer parameter to accept
 * Return: void
 */

void print_number(int n)
{
	unsigned int myint;

	myint  = n;
	/* Handling negative values */
	if (n < 0)
	{
		_putchar('-');
		myint = -n;
	}
	/** for real numbers greater than 9 */

	if (myint / 10 != 0)
		print_number(myint / 10);
	_putchar((myint % 10) + '0');
}
