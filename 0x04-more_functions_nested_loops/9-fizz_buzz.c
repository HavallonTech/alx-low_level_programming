#include <stdio.h>

/**
 * main - a program prints the numbers from 1 to 100 followed by a new line
 * multiples of three prints Fizz instead of number
 * multiples of five prints Buzz
 * multiplies of both three and five FizzBuss
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k;
	int i;

	k = 100;
	i = 1;

	while (i <= k)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf(" FizzBuzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else
			printf(" %d", i);
		i++;
	}
	printf("\n");
	return (0);
}
