#include "main.h"
#include <stdio.h>

/**
 * error_file - program checks if files can be opened.
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: arguments vector.
 * Return: no return.
 */
void file_error(int file_from, int file_to, char *argv[])
{
	if (src_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (dest_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - program check the code for ALX AFRICA SE students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int src_file, dest_file, error;
	ssize_t content_len, write_file;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	src_file = open(argv[1], O_RDONLY);
	dest_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	file_error(file_from, file_to, argv);

	content_len = 1024;
	while (content_len == 1024)
	{
		content_len = read(src_file, buf, 1024);
		if (content_len == -1)
			file_error(-1, 0, argv);
		write_file = write(dest_file, buf, content_len);
		if (write_file == -1)
			file_error(0, -1, argv);
	}

	error = close(src_file);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_file);
		exit(100);
	}

	error = close(dest_file);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_file);
		exit(100);
	}
	return (0);
}
