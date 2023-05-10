#include "main.h"

/**
 * read_textfile - Reads a text and prints it to the POSIX standard output.
 * @filename: File name.
 * @letters: Number of letters to read and print.
 * Return: 0, if fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int file;
char *buffer;
ssize_t read_count, write_count;
if (filename == NULL)
{
return (0);
}

file = open(filename, O_RDONLY);

if (file == -1)
{
return (0);
}

buffer = malloc(sizeof(char) * (letters +1));

if (buffer == NULL)
{
return (0);
}

read_count = read(file, buffer, letters);
write_count = write(STDOUT_FILENO, buffer, read_count);

close(file);

free(buffer);

return (write_count);
}
