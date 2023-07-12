#include <stdlib.h>
#include "main.h"

/**
 * wordscount - a second function that counts number of words
 * @s: string parameter to be worked upon
 * Return: int number of words
 */
int wordscount(char *s)
{
	int flagchecker;
	int c;
	int k;

	flagchecker = 0;
	k = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flagchecker = 0;
		else if (flagchecker == 0)
		{
			flagchecker = 1;
			k++;
		}
	}

	return (k);
}

/**
 * **strtow - a function that splits a string into words.
 * @str: parameter string to be splitted
 * Return: pointer to an array of strings upon success
 * or NULL  when the memory was not created
 */
char **strtow(char *str)
{
	char **arraymatrix, *temp;
	int i, kess, len;
	int words, c = 0, st, en;

	kess = len = 0;

	while (*(str + len))
		len++;
	words = wordscount(str);
	if (words == 0)
		return (NULL);
	arraymatrix = (char **) malloc(sizeof(char *) * (words + 1));

	if (arraymatrix == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				en = i;
				temp = (char *) malloc(sizeof(char) * (c + 1));
				if (temp == NULL)
					return (NULL);
				while (st < en)
					*temp++ = str[st++];
				*temp = '\0';
				arraymatrix[kess] = temp - c;
				kess++;
				c = 0;
			}
		}
		else if (c++ == 0)
			st = i;
	}
	arraymatrix[kess] = NULL;
	return (arraymatrix);
}
