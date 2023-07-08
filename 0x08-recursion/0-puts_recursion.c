#include "main.h"
/**
 * _puts_recursion - a function that prints a string, followed by a new line
 * @s: input parameter string
 * Return: 0 once successfull.
 */

void _puts_recursion(char *s)
{
	/* check if a valid string was passed */
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	/* Print a new line */
	else
		_putchar('\n');
}
