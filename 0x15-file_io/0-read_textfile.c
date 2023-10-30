#include "main.h"

/*
 * read_textfile - reads a text file and prints letters
 * @filename: filename
 * @letters: numbers of letters to be printed
 * Return: numbers of letters printed or 0 (failure)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	ssize_t emp, new;
	char *mal;

	if (!filename)
		return (0);

	x = open(filename, O_RDONLY);

	if (x == -1)
		return (0);

	mal = malloc(sizeof(char) * (letters));
	if (mal)
		return (0);

	emp = read (x, mal, letters);
	new = write(STDOUT_FILENO, mal, emp);

	close(x);

	free(mal);

	return (new);
}

