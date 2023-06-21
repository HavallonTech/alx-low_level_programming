#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * Return: the last value of a number
 * @k: is the char to be checked
 */

int print_last_digit(int k)
{
int temp;

if (k < 0)
	k = k * (-1);
temp = k % 10;
if (temp < 0)
	temp = temp * (-1);
_putchar (temp + '0');
return (temp);
}
