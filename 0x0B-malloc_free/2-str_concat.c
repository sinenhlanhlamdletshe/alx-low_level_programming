#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string to concatenate 1
 * @s2: string to concatenate 2
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int s1length = 0;
	int s2length = 0;
	int x;
	char *bat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (x = 0 ; s1[x] != '\0' ; x++)
		s1length++;
	for (x = 0 ; s2[x] != '\0' ; x++)
		s2length++;

	bat = malloc(sizeof(char) * (s1length + s2length) + 1);

	if (bat == NULL)
		return (NULL);
	for (x = 0 ; s1[x] != '\0' ; x++)
		bat[x] = s1[x];
	for (x = 0 ; s2[x] != '\0' ; x++)
		bat[s1length + 1] = s2[x];
	return (bat);
}
