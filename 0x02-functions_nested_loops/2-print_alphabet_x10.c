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

	alph = 'a';
	while (alph < = 'z')
	{
		_putchar (alph);
		alph++;
	}
	_putchar('\n');
	count++;
}
}
