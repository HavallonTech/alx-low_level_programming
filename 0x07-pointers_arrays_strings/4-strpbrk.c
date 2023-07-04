#include "main.h"

/**
* _strpbrk : A function that searches a string
* _strpbrk - A function that searches a string for any of a set of bytes
* @s: first parameter input
* @accept: second  parameter input
* Return : 0 upon successfull complition of execution
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
