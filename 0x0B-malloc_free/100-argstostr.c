#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: argument count
 * @av: double pointer array
 * Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
	int x, y, z = 0, s = 0;
	char *abc;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			s++;
	}
	s += ac;

	abc = malloc(sizeof(char) * s + 1);
	if (abc == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
	for (y = 0; av[x][y]; y++)
	{
		abc[z] = av[x][y];
		z++;
	}
	if (abc[z] == '\0')
	{
		abc[z++] = '\n';
	}
	}
	return (abc);
}
