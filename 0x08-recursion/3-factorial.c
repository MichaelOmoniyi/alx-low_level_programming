#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: Number of whose factorial to be found.
 * Return: Factorial of the number.
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
