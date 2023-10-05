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
	char *mem;
	unsigned int x = 0, y = 0, slength1 = 0, slength2 = 0;

	while (s1 && s1[slength1])
		slength1++;
	while (s2 && s2[slength2])
		slength2++;

	if (n < slength2)
		mem = malloc(sizeof(char) * (slength1 + n + 1));
	else
		mem = malloc(sizeof(char) * (slength1 + slength2 + 1));

	if (!mem)
		return (NULL);

	while (x < slength1)
	{
		mem[x] = s1[x];
		x++;
	}

	while (n < slength2 && x < (slength1 + n))
		mem[x++] = s2[y++];

	while (n >= slength2 && x < (slength1 + slength2))
		mem[x++] = s2[y++];

	mem[x] = '\0';

	return (mem);
}
