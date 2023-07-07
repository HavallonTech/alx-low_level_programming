
#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int count;
	int counter;

	count = 0;
	while (dest[count] != '\0')
	{
		count = count + 1;
	}
	counter = 0;
	while (counter < n && src[counter] != '\0')
	{
		dest[count] = src[counter];
		count++;
		counter++;
	}
	dest[count] = '\0';
	return (dest);
}
