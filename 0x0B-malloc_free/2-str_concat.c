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
	char *strcon;
	int k1;
	int k2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	k1 = 0;
	k2 = 0;
	while (s1[k1] != '\0')
		k1++;
	while (s2[k2] != '\0')
		k2++;
	strcon = malloc(sizeof(char) * (k1 + k2 + 1));

	if (strcon == NULL)
		return (NULL);
	k1 = 0;
	k2 = 0;

	while (s1[k1] != '\0')
	{
		strcon[k1] = s1[k1];
		k1++;
	}

	while (s2[k2] != '\0')
	{
		strcon[k1] = s2[k2];
		k1++;
		k2++;
	}
	strcon[k1] = '\0';
	return (strcon);
}

