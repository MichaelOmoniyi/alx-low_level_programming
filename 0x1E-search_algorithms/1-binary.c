#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the index where value is located or returns -1
 * If value is not present in array or if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
    long unsigned int low = 0;
    long unsigned int high = size;
    long unsigned int mid;
    long unsigned int i;

    while (low <= high)
    {
        mid = (low + high) / 2;
        printf("Searching in array: ");
        for (i = low; i < high; i++)
        {
            if (i == (high - 1))
            {
                printf("%d\n", array[i]);
            }
            else
            {
                printf("%d, ", array[i]);
            }
        }

        if (array[mid] == value)
        {
            return (mid);
        }
        else if (array[mid] > value)
        {
            high = mid - 1;
        }
        else if (array[mid] < value)
        {
            low = mid + 1;
        }
        else
        {
            return (-1);
        }
    }
    
    return (-1);
}
