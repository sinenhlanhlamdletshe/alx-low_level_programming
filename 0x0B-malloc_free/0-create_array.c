#include "main.h"

/**
 * create_array - creates an array
 *@c: to be stored in the array
 *@size: size of the array
 *Return: pointer to array, NULL if unsuccessful
 */
char *create_array(unsigned int size, char c)
{
	char *abc;
	unsigned int x;

	abc = malloc(sizeof(char) * size);
	if (size == 0 || abc == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		abc[x] = c;
	return (abc);
}
