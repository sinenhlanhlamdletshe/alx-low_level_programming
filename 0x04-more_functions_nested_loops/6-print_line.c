#include "main.h"

/**
 *print_line - function that prints straight line
 *@n: number of times the character '_' will be printed
 *Return: void
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int x;

		for (x = 1; x <= n ; x++)
			_putchar('_');
		_putchar('\n');
	}
}
