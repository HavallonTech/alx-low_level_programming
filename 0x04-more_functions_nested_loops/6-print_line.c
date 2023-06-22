#include "main.h"

/**
 * print_line -funtion to  print line n number of times
 * @n : the values to be passed to function determins the lenght of line
 * Return: void since there is no value to return
 */

void print_line(int n)
{
	while (n >= 0)
	{
		if (n == 0)
			_putchar('\n');
		else
			_putchar('_');
		n--;
	}
}
