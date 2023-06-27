#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse, then a new line
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int myStringLenght = 0;
	int counter;

	while (*s != '\0')
	{
		myStringLenght++;
		s = s + 1;
	}
	s = s - 1;
	for (counter = myStringLenght; counter > 0; counter--)
	{
		_putchar(*s);
		s = s - 1;
	}

	_putchar('\n');
}
