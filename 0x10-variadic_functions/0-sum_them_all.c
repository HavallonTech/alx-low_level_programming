#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - A function that returns the sum of all its argument
 * @n: The number of paramters passed to the function as argument
 * @...: A variable number of paramters to sum up
 * Return: If n == 0 - 0
 *         Otherwise - the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int count;
	unsigned int sum;

	sum = 0;

	va_start(ap, n);

	for (count = 0; count < n; count++)
	{
		sum = sum + va_arg(ap, int);
	}
	va_end(ap);

	return (sum);
}
