#include <stdio.h>
/**
 *  main - fibonacci
 *  Purpose - no hardcode
 *  Return:  (void)
 */
int main(void)
{
	unsigned long int a;
	unsigned long int b;
	unsigned long int numbern;

	long double  summation;

	int counter;

	a = 1;
	b = 2;
	counter = 1;
	summation = 0;

	while (counter <= 40)
	{
		if (a < 4000000 && (a % 2) == 0)
			summation = summation + a;
		numbern = a + b;
		a = b;
		b = numbern;
		counter = counter + 1;
	}
	printf("%.0Lf\n", summation);
	return (0);
}
