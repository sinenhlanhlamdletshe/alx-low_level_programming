#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters to uppercase
 * @r: string to be converted
 * Return: modified string
 */
char *string_toupper(char *r)
{
	int x;

	for (x = 0 ; r[x] != '\0' ; x++)
	{
		if (r[x] >= 'a' && r[x] <= 'z')
		{
			r[x] = r[x] - 32;
		}
	}
	return (r);
}

