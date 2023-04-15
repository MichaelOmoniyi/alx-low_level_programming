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
    int i, j, k, l, m;
    char *concat;

    for (i = 0; s1[i] != '\0'; i++)
    {
        ;
    }
    for (j = 0; s2[j] != '\0'; j++)
    {
        ;
    }

    concat = malloc(i + j + 1);
    if (concat == NULL)
    {
        return (NULL);
    }

    for (k = 0; k < i; k++)
    {
        concat[k] = s1[k];
    }
    m = 0;
    for (l = k; l < j + i; l++)
    {
        concat[l] = s2[m];
        m++;
    }
    concat[l] = '\0';
    
    return (concat);
}
