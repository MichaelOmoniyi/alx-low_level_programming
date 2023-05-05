#include <unistd.h>

/**
 * _putchar - Write the character c to stdout
 * @c: The character to print.
 * Return: 1, if successful and -1, if not successful.
 */

int _putchar(char c)
{
    return (write(1, &c, 1));
}
