#include "main.h"

/**
* _strpbrk - A function that searches a stringfor any set of byte
* @s: first inpute parameter
* @accept: econd parameter to be pass to the function
* Return: returns 0 upon succes
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int counter;

	while (*s)
	{
		for (counter = 0; accept[counter]; counter++)
		{
			if (*s == accept[counter])
			{
				return (s);
			}
		}
		s = s + 1;
	}
	return ('\0');
}
