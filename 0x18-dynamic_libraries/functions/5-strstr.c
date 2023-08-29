#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: Main string.
 * @needle: Substring
 * Return: A pointer to the beginning of the substring,
 * or NULL, if no substring is found.
 */

char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
{
return(haystack);
}

while (*haystack)
{
while (*needle && *needle == *haystack)
{
    needle++;
    haystack++;
}

if (*needle == '\0')
{
return(haystack);
}

haystack++;
}
return(haystack);
}
