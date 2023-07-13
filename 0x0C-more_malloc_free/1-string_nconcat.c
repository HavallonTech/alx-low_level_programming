#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - c function to oncatenates two strings.
 * @s1: first string as parameter
 * @s2: second string as parameter 2
 * @n: amount of bytes to work with
 * Return: pointer to the allocated memory
 * if malloc fails, status value is equal to 98 stated in question
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *stringout;
	unsigned int str1, str2, lsout, k;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
/* check terminal char in string one and two */
	for (str1 = 0; s1[str1] != '\0'; str1++)
		;

	for (str2 = 0; s2[str2] != '\0'; str2++)
		;

	if (n > str2)
		n = str2;

	lsout = str1 + n;

	stringout = malloc(lsout + 1);

	if (stringout == NULL)
		return (NULL);

	for (k = 0; k < lsout; k++)
		if (k < ls1)
			stringout[k] = s1[k];
		else
			stringout[k] = s2[k - str1];

	stringout[k] = '\0';

	return (stringout);
}

