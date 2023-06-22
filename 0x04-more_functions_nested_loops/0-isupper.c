#include "main.h"

/**
 * _isupper - check if C uppercase letters and returns 1 if true
 * @c: char to check if it complies
 * Return: 0 for none uppercase
 * Return: 1 for uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
