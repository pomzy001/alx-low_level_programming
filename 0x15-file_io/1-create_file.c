#include "main.h"

/**
 * create_file - This will create a file.
 * @filename: Pointer to the name of the file to create.
 * @text_content: Pointer to a string to write to the file.
 *
 * Return: When the function fails - (-1).
 *         Otherwise - (1).
 */
int create_file(const char *filename, char *text_content)
{
	int fdd, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fdd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fdd, text_content, length);

	if (fdd == -1 || w == -1)
		return (-1);

	close(fdd);

	return (1);
}

