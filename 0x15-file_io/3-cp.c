#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fdd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: name of the file buffer storing chars for.
 *
 * Return: pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes all file descriptors.
 * @fdd: File descriptor to be closed.
 */
void close_file(int fdd)
{
	int c;

	c = close(fdd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdd);
		exit(100);
	}
}

/**
 * main - This Copy the contents of a file to another file.
 * @argc: this is the number of arguments supplied to the program.
 * @argv: array of pointers to the arguments provided.
 *
 * Return: 0 on success.
 *
 * Description: When argument count is incorrect - exit code 97.
 * If file_from does not exist or can't be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from can't be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
