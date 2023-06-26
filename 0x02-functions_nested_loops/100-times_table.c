#include "main.h"
/**
 * function that prints the n times table, starting with 0
 * If n =0 or n > 15 it should not print anything
 *  return : void return type
 */

void print_times_table(int n)
{
int a;
int b;
int buffer1;
int buffer2;
int result;

a = 0;
b = 0;

if !(n > 15 || n == 0)
{
while (a <= n)
{
	while (b <= n)
	{
		result = a *b;
		if (b == 0)
			_putchar((result) + '0');
		else if (result < 10 && b != 0)
		{
			if (b != 10)
				_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar((result) + '0');
		}
		else if (result > 99 && b != 0)
		{
			buffer1 = result / 100;
			buffer2 = result / 10;
			if (b != 10)
				_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(buffer1 + '0');
			_putchar((buffer2 % 10) + '0');
			_putchar((result % 10) + '0');
		}
		else
		{
			if (b != 10)
				_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
		}
		b++;
	}
	_putchar('\n');
	b = 0;
	a++;
}}}
