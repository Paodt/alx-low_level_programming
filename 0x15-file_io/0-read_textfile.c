#include "main.h"

/**
 * read_textfile - Reads a text file and print it to stdout
 * @filename: name of the file to read
 * @letters: number of letters it should read or print
 * Return: actual number of letters it could read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, wr;
	char *b;
	int f;

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	b = malloc(sizeof(char) * (letters));

	if (b == NULL)
		return (0);

	rd = read(f, b, letters);
	wr = write(STDOUT_FILENO, b, rd);

	close(f);

	free(b);

	return (wr);
}
