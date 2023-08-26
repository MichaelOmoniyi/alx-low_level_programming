#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: string that is added to.
 * @src: string that is added from.
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
int len, count;

for (len = 0; dest[len] != '\0'; len++)
{
len++;
}
for (count = 0; src[count] != '\0'; count++)
{
dest[len] = src[count];
len++;
}
dest[len] = '\0';
return (dest);
}
