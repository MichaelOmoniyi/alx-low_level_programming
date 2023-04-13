#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Size of memory to be allocate.
 * Return: Returns pointer to array.
 */

void *malloc_checked(unsigned int b)
{
void *p = malloc(b);

if (p == NULL)
{
exit(98);
}

return (p);
}
