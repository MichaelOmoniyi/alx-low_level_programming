#include "function_pointers.h"

/**
 * print_name - Prints the input passed into it.
 * @f: A callback function.
 * @name: A pointer to the name argument.
 */

void print_name(char *name, void (*f)(char *))
{
if (!f || !name)
{
return;
}
f(name);
}
