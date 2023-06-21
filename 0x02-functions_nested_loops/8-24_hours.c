#include "main.h"
/**
 * jack_bauer - print every minute of the day
 * retunn : void return type
 * minutes stars from 00:00 to 23:59
 */

int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
	return (1);
}
else if (n == 0)
{
	_putchar (48);
	return (0);
}
else
{
	_putchar('-');
	return (-1);
}
}
