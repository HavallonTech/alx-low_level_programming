#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by new line
 * return: void
 */
void print_alphabet_x10(void)
{
int count = 0;

while (count < 10)
{
	char alph;

	for (alph = 'a'; alph < = 'z'; alph++)
	{
		_putchar (alph);
	}
	_putchar('\n');
	count++;
}
}
