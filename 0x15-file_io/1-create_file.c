#include "holberton.h"

/**
 * create_file - creates a file.
 * @filename: Pointer to the name of the file to read.
 * @text_content: NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, answer = 0, i;

	if (filename == NULL)
	{
		return (-1);
	}
	file_descriptor = open(filename, O_TRUNC | O_CREAT | O_WRONLY, 0600);
	if (file_descriptor == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	for (i = 0; text_content[i]; i++)
	{
	}
	answer = write(file_descriptor, text_content, i);
	if (answer == -1)
	{
		return (-1);
	}
	close(file_descriptor);
	return (1);
}
