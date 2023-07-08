#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - a program to prints the minimum number of coins
* could be used as change for an amount of money
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 when succeefull, 1 (Error)
*/
int main(int argc, char *argv[])
{
	int mynumber;
	int count;
	int finalresult;

	int coins[] = {25, 10, 5, 2, 1};

/** When given a wrong value */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	mynumber = atoi(argv[1]);
	finalresult = 0;

/** When the value is already a coin */
	if (mynumber < 0)
	{
		printf("0\n");
		return (0);
	}

	for (count = 0; count < 5 && mynumber >= 0; count++)
	{
		while (mynumber >= coins[count])
		{
			finalresult++;
			mynumber -= coins[count];
		}
	}

/* Return calculated coin to calling functions */
	printf("%d\n", finalresult);
	return (0);
}
