#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: first input value
 * @src:  second input value
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int first;
	int second;

	first = 0;
	while (dest[first] != '\0')
	{
		first = first + 1;
	}
	second = 0;
	while (src[second] != '\0')
	{
		dest[first] = src[second];
		first =first +1;
		second = second + 1;
	}

	dest[first] = '\0';
	return (dest);
}
