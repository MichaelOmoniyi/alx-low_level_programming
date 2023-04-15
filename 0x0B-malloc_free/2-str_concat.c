#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: A string.
 * @s2: A string.
 * Return: Returns newly allocated memory containing s1, s2
 * and null terminator or NULL if malloc fails.
 */

char *str_concat(char *s1, char *s2)
{
int i, j, k, l;
char *concat;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (i = 0; s1[i] != '\0'; i++)
;

for (j = 0; s2[j] != '\0'; j++)
;

concat = malloc(i + j + 1);
if (concat == NULL)
return (NULL);

for (k = 0, l = 0; k < (i + j + 1); k++)
{
if (k < i)
concat[k] = s1[k];
else
concat[k] = s2[l++];
}
return (concat);
}
