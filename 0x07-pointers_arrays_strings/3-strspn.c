#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: input
 * @accept: input
 * Return: always 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int x;
	unsigned int n = 0;

	while (*s)
	{
		for (x = 0 ; accept[x] ; x++)
		{
			if (*s == accept[x])
			{
				n++;
				break;
			}
			else if (accept[x + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (0);
}
