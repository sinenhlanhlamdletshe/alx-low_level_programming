#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: the pointer to the array
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x = 0, temp;

	n = n - 1;
	for (x = 0 ; x < n ; x++)
	{
		temp = a[x];
		a[x] = a[n];
		a[n] = temp;
		n--;
	}
}
