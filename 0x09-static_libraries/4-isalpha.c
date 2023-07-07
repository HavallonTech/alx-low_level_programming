#include "main.h"
/**
 * _isalpha - check if a char is alphabetic
 * Return: 1 for lowercase and 0 for notne lowercase
 * @mych: is the char to be checked
 */

int _isalpha(int mych)
{
if (((mych >= 'a') && (mych <= 'z')) || ((mych >= 'A') && (mych <= 'Z')))
	return (1);
else
	return (0);
}
