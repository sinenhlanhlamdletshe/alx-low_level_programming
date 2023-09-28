#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be squared
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find natural square root of a number
 * @n: number to be squared
 * @x: iterator
 * Return: square root
 */
int actual_sqrt_recursion(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (actual_sqrt_recursion(n, x + 1));
}
