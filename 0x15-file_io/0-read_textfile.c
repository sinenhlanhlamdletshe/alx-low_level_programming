#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file to read
 * @letters: number of letters to be printed
 * Return: number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	ssize_t emp, new;
	char *mal;

	if (filename == NULL)
		return (0);
	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);
	mal = malloc(sizeof(char) * (letters));
	if (mal == NULL)
	{
		close(x);
		return (0);
	}
	emp = read(x, mal, letters);
	close(x);
	if (emp == -1)
	{
		free(mal);
		return (0);
	}
	new = write(STDOUT_FILENO, mal, emp);
	free(mal);
	if (emp != new)
		return (0);
	return (new);
}

