#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that frees a 2 dimensional grid previously created
 * @width: width input parameter 1
 * @height: height input parameter 2
 * Return: pointer to a two dimentional array
 */

int **alloc_grid(int width, int height)
{
	int **meme;
	int xaxis;
	int yaxis;

	if (width <= 0 || height <= 0)
		return (NULL);

	meme = malloc(sizeof(int *) * height);

	if (meme == NULL)
		return (NULL);

	for (xaxis = 0; xaxis < height; xaxis++)
	{
		meme[xaxis] = malloc(sizeof(int) * width);

		if (meme[xaxis] == NULL)
		{
			for (; xaxis >= 0; xaxis--)
				free(meme[xaxis]);

			free(meme);
			return (NULL);
		}
	}

	for (xaxis = 0; xaxis < height; xaxis++)
	{
		for (yaxis = 0; yaxis < width; yaixs++)
			meme[xaxis][yaxis] = 0;
	}

	return (meme);
}
