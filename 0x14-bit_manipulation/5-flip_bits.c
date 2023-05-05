#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: number of bits.
 * @m: number.
 *
 * Return: Number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, count = 0;
unsigned long int current_index;
unsigned long int exclusive = n ^ m;

for (i = 63; i >= 0; i--)
{
current_index = exclusive >> 1;
if (current_index & 1)
{
count++;
}
}
return (count);
}
