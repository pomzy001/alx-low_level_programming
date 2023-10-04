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
	/**check for NULL filename*/
	if (filename == NULL)
		return (0);

	/**open the file for reading*/
	FILE *file = fopen(filename, "r");

	if (file == NULL)
		return (0);

	/**Allocate memory for a buffer to read the file content*/
	char *buffer = (char *)malloc(letters + 1);

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	/**Read from the file into buffer*/
	size_t bytesRead = fread(buffer, 1, letters, file);

	if (bytesRead <= 0)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	/**Null terminating the string*/
	buffer[bytesRead] = '\0';
	/**print to stdout*/
	ssize_t bytesWritten = fwrite(buffer, 1, bytesRead, stdout);

	fclose(file);
	free(buffer);
	if (bytesWritten != bytesRead)
	{
		return (0);
	}
	return (bytesWritten);
}


