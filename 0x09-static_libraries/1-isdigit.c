#include "main.h"

/**
 * _isdigit - check if is digit  between 0 - 9
 * @c: char to be passed to the function
 *
 * Return: 0 if not a digit or 1 if a digit
 */

int _isdigit(int c)
{
	int retv;

	if (c >= '0' && c <= '9')
		retv = 1;
	else
		retv = 0;
return (retv);
}
