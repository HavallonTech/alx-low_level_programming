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

	printf("%lu, %lu, ", a, b);
	for (i = 1; i <= 96; i++)
	{
		result = a + b;
		a = b;
		b = result;
		printf("%lu, ", result);
	}
	printf("\n");
	return (0);
}
