#include "main.h"

/**
 * append_text_to_file - appends text at the end of file
 * @filename: name of the file
 * @text_content: content to be appended
 * Return: 1 (success) or -1 (failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, new, words;

	if (!filename)
		return (-1);

	x = open(filename, O_WRONLY | O_APPEND);

	if (x == -1)
		return (-1);

	if (text_content)
	{
		for (words = 0; text_content[words]; words++)
			;
		new = write(x, text_content, words);

		if (new == -1)
			return (-1);
	}

	close(x);

	return (1);
}
