#include "main.h"

/**
 * rot13 - function encodes a string
 * @r: sting to be encoded
 * Return: encoded string
 */
char *rot13(char *r)
{
	int x, z;
	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char d[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvexyzabcdefghijklm";

	for (x = 0 ; r[x] != '\0' ; x++)
	{
		for (z = 0 ; c[z] != '\0' ; z++)
		{
			if (r[x] == c[z])
			{
				r[x] = d[z];
				break;
			}
		}
	}
	return (r);
}
