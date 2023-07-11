#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - a function that frees a 2 dimensional grid previously created
 * @grid: 2d grid heigth and width
 * @height: height dimension of grid
 * Description: frees memory of grid created
 * Return: void
 *
 */

void free_grid(int **grid, int height)
{
	int counter;

	while (counter < height)
	{
		free(grid[counter]);
		counter++;
	}
	/* free grid of memmory allocation */
	free(grid);
}
