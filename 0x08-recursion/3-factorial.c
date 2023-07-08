#include "main.h"

/**
 * factorial - a function to return the factorail of a given number
 * @n:  input parameter
 * Return: The factorail computation of n
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
       	else if (n < 0)
		return (-1);
	else
		return (n * factorail(n - 1));
}
