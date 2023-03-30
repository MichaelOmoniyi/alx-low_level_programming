#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: String
 * @src: String
 * @n: Number of string charcter to be copied.
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
int count;

for (count = 0; count < n && src[count] != '\0'; count++)
{
dest[count] = src[count];
}
return (dest);
}
