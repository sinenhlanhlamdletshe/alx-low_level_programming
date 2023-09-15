#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: function parameter is integer to be printed
 * Return: void
 */
void print_number(int n)
{
	unsigned int z;

	if (n < 0)
	{
		z = -n;
		_putchar('-');
	}
	else
	{
		z = n;
	}
	if (z / 10)
	{
		print_number(z / 10);
	}
	_putchar((z % 10) + '0');
}
