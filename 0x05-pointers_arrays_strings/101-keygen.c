#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - program that generates rdm valid
 * passwords for 101-crackme
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int k;
	int mysum;
	int n;

	mysum = 0;

	srand(time(NULL));

	for (k = 0; k < 100; k++)
	{
		pass[k] = rand() % 78;
		mysum += (pass[k] + '0');
		putchar(pass[k] + '0');
		if ((2772 - mysum) - '0' < 78)
		{
			n = 2772 - mysum - '0';
			mysum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
