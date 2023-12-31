#include "main.h"

/**
 * factorial - a function to return the factorail of a given number
 * @n:  input parameter
 * Return: The factorial computation of n
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
