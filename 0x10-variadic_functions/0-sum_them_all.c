#include "variadic_functions.h"

/**
 * sum_them_all - sums up all the parameters.
 * @n: Number of parameters.
 * @...: Parameters.
 * Return: The sum
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum = 0;

va_list list;

if (n != 0)
{
va_start(list, n);

for (i = 0; i < n; i++)
{
sum += va_arg(list, int);
}
return (sum);

va_end(list);
}
return (0);
}
