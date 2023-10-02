#include "main.h"

/**
 * _strdup - duplicates string to newly allocated memory
 * @str: string to duplicate
 * Return: pointer to duplicated string, NULL if str = NULL
 */
char *_strdup(char *str)
{
	int x;
	char *abc;
	int count = 0;

	if (str == 0)
		return (NULL);
	for (x = 0 ; str[x] != '\0' ; x++)
		count++;
	abc = malloc(sizeof(char) * count + 1);

	if (abc == NULL)
		return (NULL);
	for (x = 0 ; str[x] != '\0' ; x++)
		abc[x] = str[x];

	return (abc);
}
