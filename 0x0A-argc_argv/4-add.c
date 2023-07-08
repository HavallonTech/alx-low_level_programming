#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 * check_num - check - string there are digit
 * @str: array string to be check
 * Return: 0 for successful execution
 */
int check_num(char *str)
{
	unsigned int mycount;

	mycount = 0;

	while (mycount < strlen(str))

	{
		if (!isdigit(str[mycount]))
		{
			return (0);
		}

		mycount = mycount + 1;
	}
	return (1);
}

/**
 * main - Main program to Print the name of the program
 * @argc: Count arguments in program
 * @argv: Arguments
 * Return: 0 once successfull.
 */

int main(int argc, char *argv[])

{

	int mycount;
	int str_int;
	int mysum = 0;

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

		mycount = mycount + 1;
	}

	printf("%d\n", mysum);

	return (0);
}
