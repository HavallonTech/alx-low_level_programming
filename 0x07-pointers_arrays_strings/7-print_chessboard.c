#include "main.h"

/**
* print_chessboard - a function that prints the chessboard
* @a: parameter arrayiiii
* Return: 0 is returned upon succeful completion
*/

void print_chessboard(char (*a)[8])
{
	unsigned int counter1;
	unsigned int counter2;
	int k;

	counter1 = 0;
	counter2 = 0;
	k = 8;

	while (counter1 < k)
	{
		for (counter2 = 0 ; counter2 < k; counter2++)
		{
			_putchar(a[counter1][counter2]);
			 /**counter2++; */
		}
		_putchar('\n');
		counter1++;
	}
}
