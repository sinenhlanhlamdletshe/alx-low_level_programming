#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int c;
	int counter = 0;
	char rev = s[0];

	while (s[counter] != '\0')
	counter++;
	for (c = 0; c < counter; c++)
	{
		counter--;
		rev = s[c];
		s[c] = s[counter];
		s[counter] = rev;
	}
}
