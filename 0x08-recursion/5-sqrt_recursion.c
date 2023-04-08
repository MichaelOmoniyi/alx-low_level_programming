#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: Number of whose square root to find.
 * @exp: A kind of exponent.
 * Return: Square root of n.
 */

int _sub_sqrt(int n, int exp);

int _sqrt_recursion(int n)
{
int exp = 1;

return (_sub_sqrt(n, exp));
}

/**
 * _sub_sqrt - A sub function of _sqrt_recursion.
 * @exp: Serves as a kind of exponent.
 * @n: Number of whose square root to find.
 * Return: Square root of n.
 */

int _sub_sqrt(int n, int exp)
{
if (n == exp * exp)
{
return (exp);
}
else if (exp < n)
{
return (_sub_sqrt(n, ++exp));
}
else
{
return (-1);
}
}
