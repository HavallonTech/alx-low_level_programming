#include "main.h"
/**
 * function print_alphabet() in lower case
 * Program written by George Kester
 * print_alphabet - Print all alphabet in lower case
 * Return: 0
 */
void print_alphabet(void)
{
char alph;
for (alph = 'a'; alph <= 'z'; alph++)
{
	_putchar (alph);
}
_putchar('\n');
return (0);
}
