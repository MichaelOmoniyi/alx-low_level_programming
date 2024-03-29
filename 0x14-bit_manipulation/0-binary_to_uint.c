#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Binary number.
 * Return: the converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1.
 */

unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int num;

if (!b)
{
return (0);
}

num = 0;

for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
}
}
for (i = 0; b[i] != '\0'; i++)
{
num <<= 1;
if (b[i] == '1')
{
num += 1;
}
}
return (num);
}
