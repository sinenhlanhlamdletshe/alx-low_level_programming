#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed into the function.
 * @...: A variable number of strings to be printed.
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list mal;
	char *str;
	unsigned int x;

	va_start(mal, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(mal, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(mal);
}
