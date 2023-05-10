#include "main.h"

/**
 * file_error - Checks if files can be opened.
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: arguments vector
 * Return: void.
 */
void file_error(int file_from, int file_to, char *argv[])
{
if (file_from == -1)
{
dprint(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

if (file_to == -1)
{
dprint(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}

/**
 * main - Copies from one file to another.
 * @argc: number of arguments.
 * @argv: argument vector.
 * Return: 0;
 */
int main(int argc, char *argv[])
{
int file_from,file_to, file_error_close;
ssize_t chars, file_write;
char buff[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
exit(97);
}

file_from = open(argv[1], O_RDONLY);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
file_error(file_from, file_to, argv);

chars = 1024;

whille (chars == 1024)
{
chars = read(file_from, buff, 1024);
if (chars == -1)
{
file_error(-1, 0, argv);
}

file_write = write(file_to, buff, chars);

if (file_write == -1)
{
file_error(0, -1, argv);
}
}

file_error_close = close(file_from);
if(file_error_close == -1)
{
dprint(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}

file_error_close = close(file_to);
if (file_error_close == -1)
{
dprint(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}

return (0);
}
