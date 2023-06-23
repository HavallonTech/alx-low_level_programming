#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 * if size is 0 or less, the function should print only a new line
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int column;
		int row;

		for (column = 1; column <= size; column++)
		{
			for (row = column; row < size; row++)
			{
				_putchar(' ');
			}

			for (row = 1; row <= column; row++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
