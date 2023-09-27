#include "main.h"

/**
 * _strlen_recursion - returns the legth of a string
 * @s: sting measured
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
