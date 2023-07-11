#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array and fill them with a char
 * @size: size of the arrayis termed size
 * @c: char to assign to each array index
 * @mystring: parameter to be returned
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail as specified by malloc
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
/**
*	for (i = 0; i < size; i++)
*
* str[i] = c;
*/
	return (mystring);
}
