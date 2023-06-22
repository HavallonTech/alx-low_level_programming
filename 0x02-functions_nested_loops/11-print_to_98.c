#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * return type void
 * @n: print from this number
 */

void print_to_98(int n)
{
if (n > 98)
{
	while (n > 97)
	{
		if (n != 98)
		{
			_putchar('0' + (n / 10));
			_putchar('0' + n % 10);
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar('0' + (n / 10));
			_putchar('0' + n % 10);
			_putchar('\n');
		}
		n--;
	}
}
else
{
	while (n < 99)
	{
		if (n != 98)
		{
			_putchar('0' + (n / 10));
			_putchar('0' + n % 10);
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar('0' + (n / 10));
			_putchar('0' + n % 10);
			_putchar('\n');
		}
		n++;
	}
}
}
