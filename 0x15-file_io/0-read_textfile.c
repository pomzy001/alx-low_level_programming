#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - a program that reads text files
 * @letters: letters to be written
 * @filename: name of file
 *
 * Return: bytesWritten
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, 0_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char)* letters);
	t = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fd);
	return (w);
}


