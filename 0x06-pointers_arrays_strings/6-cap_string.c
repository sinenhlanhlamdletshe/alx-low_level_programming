#include "main.h"

/**
 * cap_string - capitalizes all first letters of a string
 * @r: string to be changed
 * Return: modified string
 */
char *cap_string(char *r)
{
	int x, z;
	char c[] = {44, 59, 46, '!', '?', '"', '(', ')', '{', '}', ' ', '\t', '\n'};

	for (x = 0 ; r[x] != '\0' ; x++)
	{
		if (x == 0 && r[x] >= 'a' && r[x] <= 'z')
		{
			r[x] = r[x] - 32;
		}
	for (z = 0 ; c[z] != '\0' ; z++)
	{
		if (c[z] == r[x] && (r[x + 1] >= 'a' && r[x + 1] <= 'z'))
		{
			r[x + 1] = r[x + 1] - 32;
		}
	}
	}
	return (r);
}

