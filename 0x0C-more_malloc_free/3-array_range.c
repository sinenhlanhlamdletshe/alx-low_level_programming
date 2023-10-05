#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ctr;
	int x, output;

	if (min > max)
		return (NULL);

	output = max - min + 1;

	ctr = malloc(sizeof(int) * output);

	if (ctr == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		ctr[x] = min++;

	return (ctr);
}
