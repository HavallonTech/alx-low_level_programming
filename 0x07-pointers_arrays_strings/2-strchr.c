#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: string parameter input
 * @c: search result
 * Return: Always 0 upon succeful completion
 */

char *_strchr(char *s, char c)
{
	int counter;

	counter	= 0;

	for (; s[counter] >= '\0'; counter++)
	{
		if (s[counter] == c)
			return (&s[counter]);
	}
	return (0);
}
