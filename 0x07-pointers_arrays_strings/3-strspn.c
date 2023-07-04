#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: parameter input1
 * @accept: parameter input 2
 * Return: Return success when completed
 */
unsigned int _strspn(char *s, char *accept)
{
	int counter;
	unsigned int kes;

	kes = 0;

	while (*s)
	{
		for (counter = 0; accept[counter]; counter++)
		{
			if (*s == accept[counter])
			{
				kes = kes + 1;
				break;
			}
			else if (accept[kes + 1] == '\0')
				return (kes);
		}
		s = s + 1;
	}
	return (kes);
}
