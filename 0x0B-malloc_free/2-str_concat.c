#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: input one to concatinate
 * @s2: second input to be joined
 * Return: The joined strings as one
 */

char *str_concat(char *s1, char *s2)
{
	char stringconcate;
	int k;
	int size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	k = 0;
	size = 0;

	while (s1[k] != '\0')
		k++;
	while (s2[size] != '\0')
		size++;
	stringconcate = malloc(sizeof(char) * (k + size + 1));

	if (stringconcate == NULL)
		return (NULL);
	k = 0;
	size = 0;

	/* harvesting first string to last char "'\0" */
	while (s1[k] != '\0')
	{
		stringconcate[k] = s1[k];
		k++;
	}
	/* Harvestignsecong string */
	while (s2[size] != '\0')
	{
		stringconcate[k] = s2[size];
		k++;
		size++;
	}
	stringconcate[k] = '\0';
	return (stringcocate);
}
