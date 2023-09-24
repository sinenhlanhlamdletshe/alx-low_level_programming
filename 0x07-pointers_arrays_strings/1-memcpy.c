#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory destionation
 * @src: source of memory
 * @n: number of bytes copied from memory area
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int z = 0;
	int x = n;

	for (; z < x ; z++)
	{
		dest[z] = src[z];
		n--;
	}
	return (dest);
}
