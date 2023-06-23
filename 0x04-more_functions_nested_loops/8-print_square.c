#include "main.h"

/**
 * print_square -funtion to  print diagonal line
 * @n : is the number of times the character \ should be printed
 * return: void since there is no value to return
 */

void print_diagonal(int n)
{
int row;

int column;

row = 0;
while (row < n)
{
	column = 0;
	while (column < n)
	{
		if (row == column)
			_putchar('\\');
		else if (column < row)
			putchar(' ');
		column++;
	}
	_putchar('\n');
	row++;
}
}
