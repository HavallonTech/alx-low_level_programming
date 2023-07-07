#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * @s: string to be converted
 *
 * Return: the int converted myKrom the string
 */
int _atoi(char *s)
{
	int count, d, n, mystringLenght, myK, digit;

	count = d = n = mystringLenght = myK = digit = 0;

	while (s[mystringLenght] != '\0')
		mystringLenght++;

	while (count < mystringLenght && myK == 0)
	{
		if (s[count] == '-')
			++d;

		if (s[count] >= '0' && s[count] <= '9')
		{
			digit = s[count] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			myK = 1;
			if (s[count + 1] < '0' || s[count + 1] > '9')
				break;
			myK = 0;
		}
		count++;
	}
	if (myK == 0)
		return (0);
	return (n);
}
