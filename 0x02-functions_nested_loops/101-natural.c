#include <stdio.h>
/**
 *  main - a program that computes and prints the sum of all the
 *  multiples of 3 or 5 below 1024
 *  Return: Always 0.
 */
int main(void)
{
	int counter;
	int summation;

	counter = 1;
	summation = 0;
	while (counter < 1024)
	{
		if ((counter % 3) == 0 || (counter % 5) == 0)
			summation = summation + counter;
		counter++;
	}
	printf("%d\n", summation);
	return (0);
}
