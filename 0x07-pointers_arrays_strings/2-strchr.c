#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: input
 * @c: input
 * Return: always 0 (success)
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '\0' ; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
