#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: string to be created
 * Return: length of string
 */
int _strlen(char *s)
{
	int x;
	int count = 0;

	for (x = 0 ; s[x] != '\0' ; x++)
		count++;
	return (count);
}

