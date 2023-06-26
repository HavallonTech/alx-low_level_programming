#include "main.h"
/**
 * times_table - print 9 times tabble starting from 0
 *  return : void return type
 */

void times_table(void)
{
int a;

int b;

int result;

a = 0;
b = 0;

while (a < 10)
{
	while (b < 10)
	{
		result = a *b;
		if (result < 10)
		{
			if (b != 9)
				_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar((result) + '0');
		}
		else
		{
			if (b != 9)
				_putchar(',');
			_putchar(' ');
			_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
		}
		b++;
	}
	_putchar('\n');
	b = 0;
	a++;
}
}
