#include "main.h"

/**
 * flip_bits - returns number of bits needed to flip from one number to another
 * @n: first number to compare
 * @m: second number to compare
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, byte = 0;
	unsigned long int ven;
	unsigned long int mal = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		ven = mal >> x;
		if (ven & 1)
			byte++;
	}

	return (byte);
}
