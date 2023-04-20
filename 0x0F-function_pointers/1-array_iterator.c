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

if (array || action)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
