#include <stdio.h>
/**
 *  main - first 50 fibonacci
 *  Purpose - just a copy of no hardcode
 *  Return:  (void)
 */
int main(void)
{
	long double a;
	long double b;
	int i;

	long double result;

	a = 1;
	b = 2;

	printf("%.0Lf, %.0Lf, ", a, b);
	for (i = 1; i <= 48; i++)
	{
		result = a + b;
		a = b;
		b = result;
		printf("%.0Lf, ", result);
	}
	printf("\n");
	return (0);
}
