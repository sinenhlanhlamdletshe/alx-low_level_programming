#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed into the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	char *str, *ap = "";

	va_list mal;

	va_start(mal, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", ap, va_arg(mal, int));
					break;
				case 'i':
					printf("%s%d", ap, va_arg(mal, int));
					break;
				case 'f':
					printf("%s%f", ap, va_arg(mal, double));
					break;
				case 's':
					str = va_arg(mal, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", ap, str);
					break;
				default:
					x++;
					continue;
			}
			ap = ", ";
			x++;
		}
	}

	printf("\n");

	va_end(mal);
}
