#include "main.h"

/**
 *print_square - function that prints square
 *@size: function parameter that measures the size of the square
 *Return: void
 */
void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int x;
		int y;

		for (x = 1 ; x <= size ; x++)
		{
			for (y = 1 ; y <= size ; y++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
