#include "main.h"
/**
* _memset - a function that fill a block of memory with a constant byte
* @s: starting memory address
* @b: the desired values to be used
* @n: number of byte
* Return: changed array with new value for n bytes in the programe
*/
char *_memset(char *s, char b, unsigned int n)
{
	int kes;

	kes = 0;
	/* Since we are using a double determinant for our loop*/
	for (; n > 0; kes++)
	{
		s[kes] = b;
		n--;
	}
	return (s);
}
