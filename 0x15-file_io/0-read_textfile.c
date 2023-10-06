#include <stdlib.h>
#include "main.h"

/**
 * read_textfile- This will read text file print to STDOUT.
 * @filename: The text file being read
 * @letters: The number of letters to be read
 * Return: w- the actual number of bytes read and printed
 *        0 If function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fdd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fdd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(fdd, buffer, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buffer);
	close(fdd);
	return (w);
}
