#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string
 * @s1: string to concatenate to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x;
	unsigned int s1length = 0;
	unsigned int s2length = 0;
	char *mem;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (x = 0 ; s1[x] != '\0' ; x++)
		s1length++;
	for (x = 0 ; s2[x] != '\0' ; x++)
		s2length++;

	mem = malloc(sizeof(char) * (s1length + n) + 1);
	if (mem == NULL)
		return (NULL);
	if (n >= s2length)
	{
		for (x = 0 ; s1length[x] != '\0' ; x++)
			mem[x] = s1[x];
		for (x = 0 ; s2length[x] != '\0' ; x++)
			mem[s1length + x] = s2[x];
		mem[s1length + 1] = '\0';
	}
	else
	{
		for (x = 0 ; s1[x] != '\0' ; x++)
			mem[x] = s1[x];
		for (x = 0 ; x < n ; x++)
			mem[s1length + x] = s2[x];
		mem[s1length + x] = '\0';
	}
	return (mem);
}

