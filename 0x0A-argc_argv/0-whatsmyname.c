#include "main.h"

/**
 * main - prints the name of the program
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 (success)
 */
int main(int argc, char*argv[])
{
	(void) argc;

	printf("%s\n", *argv);
	return (0);
}
