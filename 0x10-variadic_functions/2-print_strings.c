#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - A functions that Prints strings, followed by a new line
 * @separator: The string to be printed as spearators
 * @n: The number of strings passed to the function as arguments
 * @...: A variable number of strings to be printed to the standard output
 * Description: If separator is NULL, it is not printed out
 * Else If one of the strings if NULL, (nil) is printed instead.
 * Return : no return type specified
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int count;

	count = 0;

	va_start(strings, n);

	while (count < n)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (count != (n - 1) && separator != NULL)
			printf("%s", separator);
		count++;
	}

	printf("\n");

	va_end(strings);
}
