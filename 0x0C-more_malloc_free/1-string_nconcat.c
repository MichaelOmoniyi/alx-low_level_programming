#include "main.h"
#include <stdlib.h>

/**
 * str_len - Calculate string length.
 * @string:  A string.
 * Return: returns string length
 */

int str_len(char *string)
{
int i;

for (i = 0; string[i] != '\0'; i++)
{
;
}
return (i);
}

/**
 * string_nconcat - concatenate s1 and n bytes of s2; return ptr to string
 * str_len - Calculates string length
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to concat from string 2
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
int num, len, i, j;

num = n;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
if (num < 0)
{
return (NULL);
}
if (num >= str_len(s2))
{
num = str_len(s2);
}

len = str_len(s1) + num + 1;

ptr = malloc(sizeof(*ptr)
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
ptr[i] = s1[i];
}
for (j = 0; j < num; j++)
{
ptr[i + j] = s2[j];
}
ptr[i + j] = '\0';
return (ptr);
}
