#include "main.h"

/**
 * wildcmp - Compares two string to check if they are identical.
 * @s1: String to be compared.
 * @s2: String to be compared.
 * Return: 1, if identical and 0 if otherwise.
 */

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
{
return (1);
}
if (*s1 == *s2 || *s2 == '*')
{
if (*s2 == '*')
{
if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
{
return (1);
}
}
else
{
return ( wildcmp(s1 + 1, s2 + 1);
}
}
return (0);
}
