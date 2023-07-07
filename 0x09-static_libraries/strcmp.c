#include "main.h"
/**
 * _strcmp - a function that compare string values
 * @s1: first input value
 * @s2: second input value
 *
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int kes;

	kes = 0;
	while (s1[kes] != '\0' && s2[kes] != '\0')
	{
		if (s1[kes] != s2[kes])
		{
			return (s1[kes] - s2[kes]);
		}
	kes = kes + 1;
	}
	return (0);
}
