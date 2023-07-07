#include "main.h"
/**
 * _strncpy - a function that copy a string
 * @dest: first input value
 * @src:  second input value
 * Return: void
 * @n: input n value
 */

char *_strncpy(char *dest, char *src, int n)
{
	int strcount;

	strcount = 0;

	while (src[strcount] != '\0' && strcount < n)
	{
		dest[strcount] = src[strcount];
		strcount = strcount + 1;
	}
	while (strcount < n)
	{
		dest[strcount] = '\0';
		strcount++;
	}
	return (dest);
}
