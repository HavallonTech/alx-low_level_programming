#include "main.h"
/**
 * puts_half - a function that prints half of a string, then a new line
 * @str: input
 * if odd len, n = (length_of_the_string - 1) / 2
 * Return: half of input
 */
void puts_half(char *str)
{
	long int i;
	long int n;
	long int mystringLenght;

	mystringLenght = 0;

	for (i = 0; str[i] != '\0'; i++)
		mystringLenght++;

	n = (mystringLenght / 2);

	if ((mystringLenght % 2) == 1)
		n = ((mystringLenght + 1) / 2);

	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
