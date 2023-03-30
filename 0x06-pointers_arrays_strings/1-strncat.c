#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: String to be joined to.
 * @src: String to be joined from.
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
int count, len;

for (len = 0; dest[len] != '\0'; len++)
{
;
}
for (count = 0; n > 0 && src[count] != 0; count++)
{
dest[len] = src[count];
}
return (dest);
}
