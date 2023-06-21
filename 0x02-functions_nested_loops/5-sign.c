#include "main.h"
/**
 * print_sign - print the sign of a number
 * Return: 1 for numbers greater than 0
 * retunn : 0 for numbers equal to zer (0)
 * return: -1 for numbers less than 0
 * @n: is the char to be checked
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
