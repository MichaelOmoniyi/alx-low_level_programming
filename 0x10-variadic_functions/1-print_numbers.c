#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Prints numbers followed by newline.
 * @separator: String to be printed between numbers.
 * @n: Number of parameters.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;

va_list(args);

if (separator == NULL)
{
return;
}
va_start(args, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));

if (i != (n - 1))
{
printf("%s", separator);
}
}
printf("\n");
va_end(args);
}
