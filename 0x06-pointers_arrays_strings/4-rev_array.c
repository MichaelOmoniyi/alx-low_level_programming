#include "main.h"
#include <stdio.h>
/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Array of integers.
 * @n: Number of elements in array.
 * Return: 0, when successful and 1 if otherwise.
 */

void reverse_array(int *a, int n)
{
int i;
int cp;
for (i = 0; i < (n / 2); i++)
{
cp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = cp;
}
}
