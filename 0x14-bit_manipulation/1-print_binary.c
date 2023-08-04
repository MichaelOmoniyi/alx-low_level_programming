#include "main.h"

/**
 * power - Calculates exponential.
 * @base: Base of exponent.
 * @power: Power of exponent.
 * Return: Value of the exponent.
 */

unsigned long int power(unsigned int base, unsigned int power)
{
unsigned long int exp;
unsigned int i;

exp = 1;
for (i = 1; i <= power; i++)
{
exp *= base;
}
return (exp);
}

/**
 * print_binary - Prints the binary representation of a number.
 * @n: Number to be converted to binary.
 * Return: void.
 */
void print_binary(unsigned long int n)
{
unsigned long int divisor, check;
char flag;

flag = 0;
divisor = power(2, sizeof(unsigned long int) * 8 - 1);
while (divisor != 0)
{
check = n & divisor;
if (check == divisor)
{
flag = 1;
_putchar('1');
}
else if (flag == 1 || divisor == 1)
{
_putchar('0');
}
divisor >>= 1;
}
}
