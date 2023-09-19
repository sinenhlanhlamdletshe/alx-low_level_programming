#include "main.h"

/**
 * puts_half - function that prints half a string
 * @str: string to be printed
 * Return: void
 */
void puts_half(char *str)
{
	int x, c, count = 0;

	for (x = 0 ; str[x] != '\0' ; x++)
		count++;
	c = (count - 1) / 2;
	for (x = c + 1 ; str[x] != '\0' ; x++)
		_putchar(str[x]);
	_putchar('\n');
}
