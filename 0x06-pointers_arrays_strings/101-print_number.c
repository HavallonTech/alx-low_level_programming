#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */

void print_number(int n)
{
	unsigned int myinteger;

	myinteger = n;

	if (n < 0)
	{
		/** Handling negative values */
		_putchar('-');
		myinteger = -n;
	}
		/** for all real numbers */
	if (myinteger / 10 != 0)
		print_number(myinteger / 10);
	_putchar((myinteger % 10) + '0');
}
