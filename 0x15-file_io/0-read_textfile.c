#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads text file and prints to the POSIX standard output.
 * @filename: Name of the file to read.
 * @letters: number of letters it should read and print.
 *
 * Return: actual number of letters could read and print, 0 if theres an error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor, answer = 0, answer_2 = 0;
	char *buffer_read = malloc(letters);

	if (buffer_read == NULL)
	{
		return (0);
	}
	if (filename == NULL)
	{
		free(buffer_read);
		return (0);
	}
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		free(buffer_read);
		return (0);
	}
	answer = read(file_descriptor, buffer_read, letters);
	if (answer == -1)
	{
		free(buffer_read);
		close(file_descriptor);
		return (0);
	}
	answer_2 = write(STDOUT_FILENO, buffer_read, letters);
	if (answer_2 == -1)
	{
		close(file_descriptor);
		free(buffer_read);
		return (0);
	}
	free(buffer_read);
	close(file_descriptor);
	return (answer);
}
