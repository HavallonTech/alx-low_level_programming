#include "main.h"
/**
 * main - print alphabet in lowercase
 * C Programming form ALX classes
 * Program written br George Kester
 * Putchar task
 * Return: 0
 * The Main() is the main body of the program
 */
int main(void)
{
char alph;
for (alph = 'a'; alph <= 'z'; alph++)
{
	_putchar (alph);
}
_putchar('\n');
return (0);
}
