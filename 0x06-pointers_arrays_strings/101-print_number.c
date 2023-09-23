#include "main.h"

/**
 * print_number - function prints an integer
 * @n: integer to be printed
 * Return: void
 */
void print_number(int n)
{
	int x = n;

	if (n < 0)
	{
		_putchar(45);
		x = -x;
	}
	if (x / 10)
	{
		print_number(x / 10);
	}
	_putchar(x % 10 + '0');
}
