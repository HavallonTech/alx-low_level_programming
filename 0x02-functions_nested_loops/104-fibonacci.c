#include <stdio.h>
/**
 *  main - fibonacci
 *  Purpose - no hardcode
 *  Return:  (void)
 */
int main(void)
{
	long int a;
	long int b;
	int i;
	long int result;

	a = 1;
	b = 2;

	printf("%.0Lf, %.0Lf, ", a, b);
	for (i = 1; i <= 96; i++)
	{
		result = a + b;
		a = b;
		b = result;
		printf("%.0Lf, ", result);
	}
	printf("\n");
	return (0);
}
