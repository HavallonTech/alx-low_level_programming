#include "main.h"

/**
* print_chessboard - a function that prints the chessboard
* @a: parameter arrayiiii
* Return: 0 is returned upon succeful completion
*/

void print_chessboard(char (*a)[8])
{
	unsigned int counter;
	unsigned int counter1;

	for (counter = 0; counter < 8; counter++)
	{
		for (counter1 = 0; counter1 < 8; counter1++)
			_putchar(a[counter][counter1]);
		_putchar('\n');
	}
}
