i#include "main.h"
/**
 * _strcmp - function to compare two strings
 * @s1: first input string
 * @s2: second inpute string
 * Return: the difference between strings when both
 * strings are not equal
 * or return 0 when both are equal
 */

int _strcmp(char *s1, char *s2)
{
	int strcount;

	strcount = 0;
	while (s2[strcount] != '\0' && s1[strcount] != '\0')
	{
		if (s2[strcount] != s1[strcount])
			return (s1[strcount] - s2[strcount]);
		strcount++;
	}
	return (0);
}
