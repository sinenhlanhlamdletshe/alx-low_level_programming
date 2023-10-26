#include "main.h"

/**
 * _pow - func calculates (base ^ power)
 * @base: base of the exponent
 * @power: power of the exponent
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int y;
	unsigned int x;

	y = 1;
	for (x = 1; x <= power; x++)
		y *= base;
	return (y);
}

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int ven, num;
	char r;

	r = 0;
	ven = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (ven != 0)
	{
		num = n & ven;
		if (num == ven)
		{
			r = 1;
			_putchar('1');
		}
		else if (r == 1 || ven == 1)
		{
			_putchar('0');
		}
		ven >>= 1;
	}
}
