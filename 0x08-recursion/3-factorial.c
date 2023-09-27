#include "main.h"

/**
 * factorial - returns the factorial of the given value
 * @n: given value
 * Return: factorial value of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
