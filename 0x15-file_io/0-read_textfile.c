#include "main.h"

/**
 * read_textfile - program reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_open;
	ssize_t read_file, write_file;
	char *buffer;

	if (!filename)
		return (0);

	file_open = open(filename, O_RDONLY);

	if (file_open == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	read_file = read(file_open, buffer, letters);
	write_file = write(STDOUT_FILENO, buffer, read_file);

	close(file_open);

	free(buffer);

	return (write_file);
}
