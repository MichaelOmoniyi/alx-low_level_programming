#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - Concatenate all arguments of your program.
 * @ac: Number of arguments
 * @av: Array of strings
 * Return: Pointer to new string or Null if fail.
 */

char *argstostr(int ac, char **av)
{
    char *arr, *ptr;
    int i, j, k;

    if (ac == 0 || av == NULL)
        return (NULL);

    for (i = 0, k = 0; i < ac; i++)
    {
        for (j = 0; *(*(av + i) + j) != 0; j++, k++)
            ;
        k++;
    }
    k++;

    arr = malloc(k * sizeof(*arr));
    if (arr == NULL)
        return (NULL);

    ptr = arr;
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != 0; j++)
        {
            *arr = av[i][j];
            arr++;
        }
        *arr = '\n';
        arr++;
    }
    return (ptr);
}
