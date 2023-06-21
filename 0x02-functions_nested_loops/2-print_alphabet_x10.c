#include "main.h"
/**
 *
 * print alphabet x10 - Print 10 times  all alphabet in lowercase
 * Return: void.
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
