#include "main.h"

/**
 * _isupper - check if C uppercase letters and returns 1 if true
 * @c: char to check if it complies
 * Return: 0 for none uppercase or 1 for uppercase
 */

int _isupper(int c)
{
	int rvalue;

	if (c >= 'A' && c <= 'Z')
		rvalue = 1;
	else
		rvalue = 0;
return (rvalue);
}
