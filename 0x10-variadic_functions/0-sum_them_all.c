#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed into the function.
 * @...: A variable number of paramters to calculate the sum of.
 * Return: resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list mal;
	unsigned int x, sum = 0;

	va_start(mal, n);

	for (x = 0; x < n; x++)
		sum += va_arg(mal, int);

	va_end(mal);

	return (sum);
}
