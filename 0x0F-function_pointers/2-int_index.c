#include "function_pointers.h"

/**
 * int_index - Searches for integer in an array and return the index of the integer if it meets certain conditions.
 * cmp - Callback function that provides conditions for integers in the array.
 * @array: Array to be searched.
 * @size: Size of array.
 * Return: Return index of the searched interger or -1 if fail.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
    int i;

    if (array && cmp)
    {
        for (i = 0; i < size; i++)
        {
            if (cmp(array[i]) != 0)
            {
                return (i);
            }
        }
    }
    return (-1);
}
