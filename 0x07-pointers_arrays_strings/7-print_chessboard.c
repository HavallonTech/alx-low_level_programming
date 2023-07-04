#include "main.h"

/**
* print_chessboard - a function that prints the chessboard
* @a: parameter array
* Return: 0 is returned upon succeful completion
*/

void print_chessboard(char (*a)[8])
{
	unsigned int counter1;
	unsigned int counter2;

	while (counter1 < 8)
	{
		while (counter2 < 8)
		{
			_putchar(a[counter1][counter2]);
			counter2++;
		}
		_putchar('\n');
		counter1++;
	}
}
