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
unsigned int no_bits;

for (no_bits = 0; n || m; n >>= 1, m >>= 1)
{
if ((n & 1) != (m & 1))
{
no_bits++;
}
}
return (no_bits);
}
