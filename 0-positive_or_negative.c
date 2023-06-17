#include <stdio.h>
#include <time.h>
#include <stdlid.h>
/**
 * main - Entry point
 *Program written by George kester
 * Return: Return  0 whenever it is successfull
 */
 /* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
	    printf("%d, is positive\n",n );
	}else if (n<0)
	{
	    printf("%d, is negative\n",n);
	}
	else {
    		printf("%d, is zero\n",n);
	}
	return (0);
}
