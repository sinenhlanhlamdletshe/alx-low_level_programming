#include "main.h"

/*
 * create_file - creates a file
 * @filename: filename
 * @text_content: text written in the file
 * Return: 1 (success) or -1 (failure)
 */
int create_file(const char *filename, char *text_content)
{
	int x, new, words;

	if (!filename)
		return (-1);

	x = open(filename, O_CREATE | O_WRONLY | O_TRUNC, 0600);

	if (x == -1)
		return (-1);

	if (!text_conten)
		text_content= "";

	for (words = 0; text_content[words]; words++);

	new = write(x, text_content, words);

	if (new == -1)
		return (-1);

	close(x);

	return (1);
}
