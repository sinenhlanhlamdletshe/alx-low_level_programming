#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **out;
	int x, q;

	if (width <= 0 || height <= 0)
		return (NULL);

	out = malloc(sizeof(int *) * height);

	if (out == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		out[x] = malloc(sizeof(int) * width);

		if (out[x] == NULL)
		{
			for (; x >= 0; x--)
				free(out[x]);

			free(out);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (q = 0; q < width; q++)
			out[x][q] = 0;
	}

	return (out);
}
