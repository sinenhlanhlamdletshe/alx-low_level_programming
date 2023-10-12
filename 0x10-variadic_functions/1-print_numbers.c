#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: The number of integers passed into the function
 * @...: A variable number of numbers to be printed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list mal;
	unsigned int x;

	va_start(mal, n);

	for (x = 0; x < n; x++)
	{
		if (!separator)
			printf("%d", va_arg(mal, int));
		else if (separator && x == 0)
			printf("%d", va_arg(mal, int));
		else
			printf("%s%d", separator, va_arg(mal, int));
	}

	printf("\n");

	va_end(mal);
}
