#include "main.h"

/**
 * print_number - prints an integer passed
 * using only  _putchar function to print
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int testnum;

	if (n < 0)
	{
		testnum = -n;
		_putchar('-');
	}
	else
	{
		testnum = n;
	}
	if (testnum / 10)
	{
		print_number(testnum / 10);
	}
	_putchar((testnum % 10) + '0');
}
