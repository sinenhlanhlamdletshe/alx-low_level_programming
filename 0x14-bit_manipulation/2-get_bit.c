#include"main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to check bits in
 * @index: index at which to get bit from
 * Return: value of the bit or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int ven, num;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	ven = 1 << index;
	num = n & ven;
	if (num == ven)
		return (1);

	return (0);
}
