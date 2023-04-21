#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - Prints strings.
 * @separator: String separator e.g. ,.
 * @n: Number of parameter.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;

va_list(args);

va_start(args, n);
for (i = 0; i < n; i++)
{
char *str = va_arg(args, char *);

if (str == NULL)
{
printf("(nil)");
}
printf("%s", str);

if (separator != NULL && i != (n - 1))
{
printf("%s", separator);
}
}
printf("\n");
}
