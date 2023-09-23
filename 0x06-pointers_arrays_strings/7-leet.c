#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @r: string to be encoded
 * Return: encoded string
 */
char *leet(char *r)
{
	int x, z;
	char c[] = "aAeEoOtTlL";
	char d[] = "4433007711";

	for (x = 0 ; r[x] != '\0' ; x++)
	{
		for (z = 0 ; c[z] != '\0' ; z++)
		{
			if (r[x] == c[z])
			{
				r[x] = d[z];
			}
		}
	}
	return (r);
}
