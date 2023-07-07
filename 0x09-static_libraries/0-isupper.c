#include "main.h"
/**
 * _isupper - check if a char is uppercase or not
 * Return: 1 for uppercase and 0 for notne lowercase
 * @mychar: is the char to be checked
 */

int _isupper(int mychar)
{
if ((mychar >= 'A') && (mychar <= 'Z'))
	return (1);
else
	return (0);
}
