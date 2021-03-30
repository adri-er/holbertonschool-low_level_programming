#include "holberton.h"

/**
 * main - copies the content of a file to another file.
 * @argc: amount of arguments introduced, has to be 2.
 * @argv: pointer to arguments introduced.
 *
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int file_descriptor_to, file_descriptor_from, status;
	char buffer[1024];

	check_arg(argc);
	file_descriptor_to = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	file_descriptor_from = open(argv[1], O_RDONLY);
	if (file_descriptor_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_descriptor_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}	status = read(file_descriptor_from, buffer, 1024);
	if (status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	status = write(file_descriptor_to, buffer, 1024);
	if (status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	status = close(file_descriptor_from);
	if (status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descriptor_from);
		exit(100);
	}
	status = close(file_descriptor_to);
	if (status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descriptor_to);
		exit(100);
	}
	return (0);
}

/**
 * check_arg - checks if theres the correct amount of arguments.
 * @argc: number of arguments.
 *
 * Return: Always 1.
 */
int check_arg(int argc)
{
	if (argc < 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	return (1);
}
