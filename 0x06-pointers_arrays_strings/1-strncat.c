#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatenates two stings
 * @dest: destination string
 * @src: source string
 * @n: bytes to concatenate
 * Return: dest;
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = strlen(dest);
	int x;

	for (x = 0 ; x < n && *src != '\0' ; x++)
	{
		dest[length + x] = src[x];
		src++;
	}
	dest[length + x] = '\0';
	return (dest);
}
