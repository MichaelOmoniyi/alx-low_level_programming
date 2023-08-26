#include "main.h"
#include <stddef.h>
/**
 * _strpbrk -  locates the first occurrence in the string s
 * of any of the bytes in the string accept.
 * @s: A pointer string
 * @accept: String to be searched through
 * Return: A pointer to the byte in s that matches
 * one of the bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
char *i;

while (*s != '\0')
{
for (i = accept; *accept != '\0'; i++)
{
if (*s == *accept)
{
return (s);
break;
}
}
++s;
}
*s = 0;
return (s);
}
