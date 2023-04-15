#include "main.h"
#include <stdlib.h>

/**
 * strtow - Splits string into words.
 * @str: A string.
 * Return: Pointer to an array of words, NULL if fails.
 */

char **strtow(char *str)
{
    char *arr, *ptr;
    int i, j;

    for(i = 0; str[i] != '\0'; i++)
    {
        ;
    }

    arr = malloc(sizeof(*arr) * i);
    if (arr == NULL)
        return (NULL);

    ptr = arr;
    for (j = 0; str[j] != '\0'; j++)
    {
        *arr = str[j];
        *arr = '\n';
        a++;
    }
    return (ptr);
}
