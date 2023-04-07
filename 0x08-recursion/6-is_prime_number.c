#include "main.h"

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: An integer.
 * @i: Divider
 * Return: 1, if number is an interger and 0 if otherwise.
 */

int divisible(int i, int n);

int is_prime_number(int n)
{
if (n <= 2)
{
return (0);
}
if (n == 2)
{
return (1);
}
return (!divisible(n, n - 1));
}

/**
 * divisible - Checks if number is divisble.
 * @i: Divider
 * @n: Number to be tested
 * Return: Results
 */
int divisible(int n, int i)
{
if (i == 1)
{
return (0);
}
return ((n % i == 0) || divisible(n, i - 1));
}
