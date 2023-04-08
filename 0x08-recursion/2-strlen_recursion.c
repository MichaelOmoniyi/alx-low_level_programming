#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: String of whose length to be returned.
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
int len;
len = 0;

if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}

