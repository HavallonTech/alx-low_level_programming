#include "main.h"
/**
 * puts2 - function that print every other character
 *  starting with the first one the the third
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	long int myStringlenght = 0;
	long int k = 0;
	char *y = str;
	long int i;

	while (*y != '\0')
	{
		y++;
		myStringlenght++;
	}
	k = myStringlenght - 1;
	for (i = 0 ; i <= k ; i++)
	{
		if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}
