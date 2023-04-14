#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc.
 * @nemb: Elements of the array.
 * @size: Size of array elements.
 * Return: Returns NULL if size or nemb equals zero, or if malloc fails
 * otherwise, returns pointer to the array.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *arr;
unsigned int i;

if (nmemb == 0 || size == 0)
{
return (NULL);
}

arr = malloc(nmemb * size);

if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < (nmemb * size); i++)
{
*(arr + i) = 0;
}
return (arr);
}
