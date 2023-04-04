#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: pointer character
 * @b: constant byte character
 * @n: number of byte to be pointed
 */

char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i = 0;

    for(i = 0; i < n; i ++)
    {
        *(s + i) = b;
    }

    return(s);
}
