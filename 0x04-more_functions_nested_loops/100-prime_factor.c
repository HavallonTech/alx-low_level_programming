#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int n;
	long int mydivision;
	long int largeFact;

	n = 612852475143;
	mydivision = 2;
	k = 0;

	while (n != 0)
	{
		if (n % mydivision != 0)
			mydivision = mydivision + 1;
		else
		{
			largeFact = n;
			n = n / mydivision;
			if (n == 1)
			{
				printf("%ld \n", largeFact);
				break;
			}
		}
	}
	return (0);
}
