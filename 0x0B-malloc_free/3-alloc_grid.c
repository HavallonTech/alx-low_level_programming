#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer to a 2 dim array of integer
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
		while (yaxis < width)
		{
			meme[xaxis][yaxis] = 0;
			yaxis++;
		}
	}

	return (meme);
}
