#include "main.h"

/**
 * _strcmp - Compare two strings.
 * @s1: A String.
 * @s2: A string.
 * Return: Negative if s1 < s2, positive if s1 > s2, and 0 if otherwise.
 */

int _strcmp(char *s1, char *s2)
{
int i, result;
for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])
{
result = s1[i] - s2[i];
return (result);
}
}
return (0);
}
