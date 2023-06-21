#include "main.h"
/**
 * _islower - check if a char is lowercase or not
 * Return: 1 for lowercase and 0 for notne lowercase
 * @mychar: is the char to be checked
 */

int _islower(int mychar)
{
if ((mychar >= 'a') && (mychar <= 'z'))
	return (1);
else
	return (0);
}
