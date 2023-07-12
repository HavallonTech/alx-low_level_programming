#include "main.h"
#include <stdlib.h>
/**
 * argstostr - a function that concatenates all the arguments of your program
 * @ac: integer input as argument 1
 * @av: double pointer array as argument two
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int i;
	int nth;
	int j;
	int k;

	k = 0;
	j = 0;

	/* char *str; */

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		for (nth = 0; av[i][nth]; nth++)
			k = k + 1;
		i = i + 1;
	}
	k += ac;

	char *str = malloc(sizeof(char) * k + 1);

	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (nth = 0; av[i][nth]; nth++)
	{
		str[j] = av[i][nth];
		j = j + 1;
	}
	if (str[j] == '\0')
	{
		str[j++] = '\n';
	}
	}
	return (str);
}

