#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size "size" and assign the char c
 * @size: size of array is termed size
 * @c: char to assign to each index
 * Description: create array of size size and assign char c to each index
 * Return: pointer to array, NULL if fail as per malloc
 *
 */
char *create_array(unsigned int size, char c)
{
	char *mystring;
	unsigned int k;

	/*Malloc declaration */
	mystring = malloc(sizeof(char) * size);
	/* the string donot exit or empty return null as failure */
	if (size == 0 || mystring == NULL)
		return (NULL);

	k = 0;

	while (k < size)
	{
		/* character c assign to individual array index */
		mystring[k] = c;
		k++;
	}
	return (mystring);
}
