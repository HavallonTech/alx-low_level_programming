#include <stdio.h>
/**
 *  main - fibonacci
 *  Purpose - no hardcode
 *  Return:  (void)
 */
int main(void)
{
	int a;
	int b;
	int i;
	long int result;

	a = 1;
	b = 2;

	printf("%d, %d, ", a, b);
	for (i = 1; i <= 97; i++)
	{
		result = a + b;
		a = b;
		b = result;
		printf("%lu, ", result);
	}
	printf("\n");
}
