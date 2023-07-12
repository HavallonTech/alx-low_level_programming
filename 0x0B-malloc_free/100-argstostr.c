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
	int i;
	int nth;
	int r;
	/**int k;*/
	int count;

	count  = 0;
	r = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		for (nth = 0; av[i][nth]; nth++)
			count++;
		i++;
	}
	count += ac;

	str = malloc(sizeof(char) * count + 1);

	/*Failure to create the dynamic memory allocation */
	if (str == NULL)
		return (NULL);

	/** Actuall concatination do here */
	while (i < ac)
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
		i++;
	}
	return (str);
}

