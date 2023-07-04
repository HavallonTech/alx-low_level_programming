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

	int k;

	k = 8;
	for (counter = 0; counter < k; counter++)
	{
		for (counter1 = 0; counter1 < k; counter1++)
			_putchar(a[counter][counter1]);
		_putchar('\n');
	}
}
