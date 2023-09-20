#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: destination string
 * @src: source sting
 * Return: dest;
 */
char *_strcat(char *dest, char *src)
{
	int destlength = 0;
	int srclength = 0;
	int x;

	for (x = 0 ; dest[x] != '\0' ; x++)
		destlength++;
	for (x = 0 ; src[x] != '\0' ; x++)
		srclength++;
	for (x = 0 ; x <= srclength ; x++)
		dest[destlength + x] = src[x];
	return (dest);
}


