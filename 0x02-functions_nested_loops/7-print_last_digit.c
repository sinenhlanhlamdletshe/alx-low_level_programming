#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @b: function parameter
 * Return: x
 */
int print_last_digit(int b)
{
	int x;

	x = b % 10;
	if (b < 0)
		x = -x;
	_putchar(x + '0');
	return (x);
}
