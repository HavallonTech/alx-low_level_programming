#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by new line
 * return: void
 */
void print_alphabet_x10(void)
{
int count;

for (count = 1; count < = 10; count++)
{
	char alph;

	for (alph = 'a'; alph < = 'z'; alph++)
	{
		_putchar (alph);
	}
	_putchar('\n');
}
}
