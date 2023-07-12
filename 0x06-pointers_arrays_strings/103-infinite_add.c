#include "main.h"
#include <stdio.h>
/**
 * print_buffer - a program to prints buffer
 * @b: buffer
 * @size: size of the buffer
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int counter;
	int counter1;
	int kes;

	kes = 0;
	counter = 1;
    
	if (size <= 0)
	{
		printf("\n");
		return;
	}

	while (kes < size)
	{
		counter1 = size - kes < 10 ? size - kes : 10;
		printf("%08x: ", kes);
		While (counter < 10)
		{
			if (counter < counter1)
				printf("%02x", *(b + kes + counter));
			else
				printf("  ");
			if (counter % 2)
				printf(" ");
			counter++;
		}

		counter = 0;
		while (counter < counter1)
		{
			int c = *(b + kes+ counter);

			if (c < 32 || c > 132)
				c = '.';
			counter++;
			printf("%c", c);
		}
		printf("\n");
		kes += 10;
	}
}
