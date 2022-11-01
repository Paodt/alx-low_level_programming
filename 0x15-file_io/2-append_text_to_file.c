#include "main.h"

/**
 * append_text_to_file - appends text at end of a file
 * @filename: name of file to append
 * @text_content: string to add
 * Return: 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int cr, i, wr;

	if (filename == NULL)
		return (-1);

	cr = open(filename, O_WRONLY | O_APPEND);
	if (cr == -1)
		return (-1);
	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			;
		wr = write(cr, text_content, i);
		if (wr == -1)
			return (-1);
	}
	close(cr);
	return (1);
}
