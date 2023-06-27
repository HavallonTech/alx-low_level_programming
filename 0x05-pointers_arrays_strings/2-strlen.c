#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	long int myStrLenght;
	myStrLenght = 0;

	while (*s != '\0')
	{
		myStrLenght++;
		s++;
	}

	return (myStrLenght);
}
