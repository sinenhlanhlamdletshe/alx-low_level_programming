#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination string
 * @src: source sting
 * @n: string bytes to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0 ; x < n && src[x] != '\0' ; x++)
		dest[x] = src[x];
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}

