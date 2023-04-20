#include "function_pointers.h"

/**
 * array_iterator - Iterates over an array and
 * return each element of the array.
 * @action: Call back function that iterates over array.
 * @array: Array to be iterated over.
 * @size: Size of array.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
i = 0;

if (array || action)
{
while (i < size)
{
action(array[i]);
i++;
}
}
}
