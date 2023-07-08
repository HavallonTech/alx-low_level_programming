#include <stdio.h>
#include "main.h"

/**
 * _atoi - a function to converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int count;
	int i;
	int n;
	int len;
	int f;
	int digit;

	count = 0;
	i = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (count < len && f == 0)
	{
		if (s[count] == '-')
			++i;

		if (s[count] >= '0' && s[count] <= '9')
		{
			digit = s[count] - '0';
			if (i % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[count + 1] < '0' || s[count + 1] > '9')
				break;
			f = 0;
		}
		count++;
	}

	if (f == 0)
		return (0);

	return (n);
}
/**
 * main - main program to multiplies two numbers
 * @argc: the number of arguments
 * @argv: the array array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int multi, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	multi = num1 * num2;

	printf("%d\n", multi);

	return (0);
}
