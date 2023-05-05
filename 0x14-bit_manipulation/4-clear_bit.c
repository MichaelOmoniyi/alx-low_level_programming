#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: bit value
 * @index: index
 *
 * Return: 1, if it worked, or -1 if an error occured.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(n) * 8)
{
return (-1);
}
*n &= -(1 << index);
return (1);
}
