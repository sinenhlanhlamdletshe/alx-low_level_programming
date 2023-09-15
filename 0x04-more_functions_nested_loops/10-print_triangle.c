#include "main.h"

/**
 *print_triangle - function that prints a triangle
 *@size: function parameter that measures the size the triangle
 *Return: void
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x;
		int z;

		for (x = 1 ; x <= size ; x++)
		{
			for (z = x ; z < size ; z++)
			{
				_putchar(' ');
			}
			for (z = 1 ; z <= x ; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
