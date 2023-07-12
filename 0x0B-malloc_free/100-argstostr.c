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
	char *str;
	int i, nth, r, count;

	count  = r = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (nth = 0; av[i][nth]; nth++)
			count++;
	}
	count += ac;
	str = malloc(sizeof(char) * count + 1);

	if (str == NULL)
		return (NULL);
	for  (i = 0; i < ac; i++)
	{
		for (nth = 0; av[i][nth]; nth++)
		{
			str[r] = av[i][nth];
			r++;
		}
		if (str[r] == '\0')
		{
			str[r++] = '\n';
		}
	}
	return (str);
}

