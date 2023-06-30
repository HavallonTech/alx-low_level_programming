#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int counter1;
	int counter2;

	char leet1[] = "aAeEoOtTlL";
	char leet2[] = "4433007711";

	while( n[counter1] != '\0')
	{
		for (counter2 = 0; counter2 < 10; counter2++)
		{
			if (n[counter1] == leet1[counter2])
			{
				n[counter1] = leet2[counter2];
			}
		}
		counter1 = counter1 + 1;
	}
	return (n);
}
