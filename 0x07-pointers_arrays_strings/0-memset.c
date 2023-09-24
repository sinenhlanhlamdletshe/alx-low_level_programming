#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: starting address of memory to fill
 * @b: the desired constant byte
 * @n: number of bytes to be changed
 * Return: new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0 ; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
