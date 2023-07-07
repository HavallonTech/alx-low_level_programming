#include "main.h"

/**
 *_memcpy - a function that copies memory area
 *@dest: where memory  isto be  stored
 *@src: memory to be copied
 *@n: number of bytes found in the serach
 *Return: Returns copied memory with number of bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int counter;
	int counter1;

	counter1 = n;
	counter = 0;

	for (; counter < counter1; counter++)
	{
		dest[counter] = src[counter];
		n = n - 1;
	}
	return (dest);
}
