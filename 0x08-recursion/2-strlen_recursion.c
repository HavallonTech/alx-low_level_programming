#include "main.h"
/**
 * _strlen_recursion - A function to returns the length of a string.
 * @s: input string to be measured
 * Return: integer indicating the lenght of the string.
 */

int _strlen_recursion(char *s)
{
	int stringlen;

	stringlen = 0;

	if (*s)
	{
		stringlen = stringlen + 1;
		stringlen += _strlen_recursion(s + 1);
	}

	return (stringlen);
}
