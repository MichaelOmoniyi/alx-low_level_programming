#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: A string pointer.
 * @accept: A string pointer.
 * Return: Returns number of bytes in s that consist of
 * bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
int i, j, count, found;
count = 0;

for (i = 0; s[i] != '\0'; i++)
{
found = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
found = 1;
break;
}
}
if (!found)
{
break;
}
count++;
}

return (count);
}
