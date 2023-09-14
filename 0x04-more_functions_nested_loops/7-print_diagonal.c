#include "main.h"

/**
 *print_diagonal - draws diagonal line using '\' character
 *@n: number of times the '\' should be printed
 *Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int x;
		int y;

		for (x = 0 ; x < n ; x++)
		{
			for (y = 0 ; y <= x ; y++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}

