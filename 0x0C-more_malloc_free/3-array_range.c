#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: Minimum array value.
 * @max: Maximum array value.
 * Return: Returns NULL if min is greater than max,
 * Null if malloc fails, otherwise returns
 * pointer to newly created array.
 */

int *array_range(int min, int max)
{
int *arr;
int i, j;

i = 0;

if (min > max)
{
return (NULL);
}

arr = malloc(sizeof(int) * ((max + 1) - min));

if (arr == NULL)
{
return (NULL);
}
for (j = min; j <= max; j++)
{
*(arr + i) = j;

i++;
}
return (arr);
}
