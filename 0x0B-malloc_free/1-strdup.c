#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - A function that returns a pointer to a newly allocated space in m
 * @str: char is the function parameter to reveive
 * Return: a pointer
 */
char *_strdup(char *str)
{
	char *mystring;
	int count;
	int r;

	count = 0;
	r = 0;

	if (str == NULL)
		return (NULL);
	/*Failure to create the malloc memeory */
	while (str[count] != '\0')
		count++;
	/* count to the terminal value of the string */

	mystring = malloc(sizeof(char) * (count + 1));

	if (mystring == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		mystring[r] = str[r];

	return (mystring);
}
