#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 * Return: number of words
 */
int count_word(char *s)
{
	int tap, q, d;

	tap = 0;
	d = 0;

	for (q = 0; s[q] != '\0'; q++)
	{
		if (s[q] == ' ')
			tap = 0;
		else if (tap == 0)
		{
			tap = 1;
			d++;
		}
	}

	return (d);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success) or NULL (Error)
 */
char **strtow(char *str)
{
	char **meli, *abc;
	int x, j = 0, length = 0, words, z = 0, start, end;

	while (*(str + length))
		length++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	meli = (char **) malloc(sizeof(char *) * (words + 1));
	if (meli == NULL)
		return (NULL);

	for (x = 0; x <= length; x++)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (z)
			{
				end = x;
				abc = (char *) malloc(sizeof(char) * (z + 1));
				if (abc == NULL)
					return (NULL);
				while (start < end)
					*abc++ = str[start++];
				*abc = '\0';
				meli[j] = abc - z;
				j++;
				z = 0;
			}
		}
		else if (z++ == 0)
			start = x;
	}

	meli[j] = NULL;

	return (meli);
}
