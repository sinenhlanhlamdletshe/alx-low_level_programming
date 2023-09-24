#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: input
 * @needle: input
 * Return: always 0 (success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0' ; haystack++)
	{
		char *r = haystack;
		char *q = needle;

		while (*r == *q && *q != '\0')
		{
			r++;
			q++;
		}
		if (*q == '\0')
			return (haystack);
	}
	return (0);
}
