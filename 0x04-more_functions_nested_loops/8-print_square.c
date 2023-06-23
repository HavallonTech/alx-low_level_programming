#include "main.h"

/**
 * print_square -funtion to  print quare
 * @size : Where size is the size of the square
 */

void print_square(int size)
{
	int row;

	int column;

	row = 0;
	if (size <= 0)
		_putchar('\n');
	else
	{
		while (row <= size)
		{
			column = 0;
			while (column <= size)
			{
				_putchar('#');
				column++;
			}
			 _putchar('\n');
			row++;
		}
	}
}
