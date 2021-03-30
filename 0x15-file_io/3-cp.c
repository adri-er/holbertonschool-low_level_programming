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
	int file_descriptor_to, file_descriptor_from, status, status_2;
	char buffer[1024];

	check_arg(argc, argv[1]);
	file_descriptor_from = open(argv[1], O_RDONLY);
	if (file_descriptor_from == -1)
	{		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_descriptor_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_descriptor_to == -1)
	{		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	status = read(file_descriptor_from, buffer, 1024);
	if (status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}	status_2 = write(file_descriptor_to, buffer, status);
	if (status != status_2 || status_2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	status = close(file_descriptor_from);
	status_2 = close(file_descriptor_to);
	if (status_2 == -1)
	{		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descriptor_to);
		exit(100);
	}
	if (status == -1)
	{		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descriptor_from);
		exit(100);
	}
	return (EXIT_SUCCESS);
}

/**
 * check_arg - checks if theres the correct amount of arguments.
 * @argc: number of arguments.
 *
 * Return: Always 1.
 */
int check_arg(int argc, char *arg1)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (arg1 == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg1);
		exit(98);
	}
	return (EXIT_SUCCESS);
}

