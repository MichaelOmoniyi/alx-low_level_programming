#include "main.h"

/**
 * _pow_recursion - Returns the exponent of a number.
 * @x: Number to be raised.
 * @y: Power
 * Return: x raised to power y
 */

int _pow_recursion(int x, int y)
{
int exp;

if (y == 0)
{
return (1);
}
else if (y > 0 && y % 2 == 0)
{
exp = _pow_recursion(x, y / 2);
return (exp *exp);
}
else if (y > 0 && y % 2 == 1)
{
return (x * _pow_recursio(x, y - 1));
}
else
{
return (-1);
}
}
