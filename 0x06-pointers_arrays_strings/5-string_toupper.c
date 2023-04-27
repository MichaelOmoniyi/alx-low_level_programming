#include "main.h"

/**
 * string_toupper - Changes all lowercase of a string to uppercase.
 * @str: string.
 * Return: The Uppercase string.
 */

char *string_toupper(char *str)
{
int len, i;

for (len = 0; str[len] != '\0'; len++)
{
;
}

for (i = 0; i < len; i++)
{
if (str[i] > 96 && str[i] < 123)
{
str[i] = str[i] - 32;
}
}
return (str);
}
