#include "variadic_functions.h"

/**
 * print_all - Prints anything.
 *
 * @format: Argument format e.g. int, char, float, etc.
 */

void print_all(const char * const format, ...)
{
    va_list(args);
    unsigned int i;
    char *separator, *s;

    va_start(args, format);
    
    separator = "";

    i = 0;
    while (format && format[i])
    {
        switch (format[i])
        {
            case 'c':
                printf("%s%c", separator, va_arg(args, int));
                break;
            case 's':
                s = va_arg(args, char *);
                if (s == NULL)
                {
                    s = "(nil)";
                }
                printf("%s%s", separator, s);
                break;
            case 'i':
                printf("%s%d", separator, va_arg(args, int));
                break;
            case 'f':
                printf("%s%f", separator, va_arg(args, double));
                break;
            default:
                i++;
                continue;
        }
        separator = ", ";
        i++;
    }

    printf("\n");
    va_end(args);
}
