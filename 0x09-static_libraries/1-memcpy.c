#include "main.h"

/**
 *_memcpy - a function that copies memory area
 *@dest: destination of memory
 *@src: source of memory to be copied
 *@n: number of bytes
 *Return: copied memory with n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int x = n;

	for (; r < x; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
