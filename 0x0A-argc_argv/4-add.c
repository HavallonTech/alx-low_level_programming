#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 * check_num - a function to check string as against digit
 * @str: array str
 * Return: Always 0 when Successfull
 */
int check_num(char *str)
{
	unsigned int i;

	i = 0;
	while (i < strlen(str))

	{
		if (!isdigit(str[count]))
		{
			return (0);
		}

		i++;
	}
	return (1);
}

/**
 * main - program to do the addition
 * @argc: Count arguments
 * @argv: Arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{
	int mycount;
	int str_int;
	int mysum;

	mysum = 0;
	mycount = 1;

	while (mycount < argc)
	{
		if (check_num(argv[mycount]))

		{
			str_int = atoi(argv[mycount]);
			mysum += str_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		mycount++;
	}

	printf("%d\n", mysum);

	return (0);
}
