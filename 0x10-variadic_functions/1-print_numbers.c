#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - A function the Prints numbers, followed by a new line
 * @separator: The char to be printed between numbers
 * @n: The number of integers passed to the function as argument
 * @...: A variable number of numbers to be printed main task
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int count;

	count = 0;

	va_start(numbers, n);

	while (count < n)
	{
		printf("%d", va_arg(numbers, int));

		if (count != (n - 1) && separator != NULL)
			printf("%s", separator);
		count++;
	}

	printf("\n");

	va_end(numbers);
}
