#include "main.h"

/**
 * _memcpy - A function that compies memory area.
 * @dest: Destinated memory area.
 * @src: Source memory area.
 * @n: Number of byte to be copied.
 * Return: The destinated memory area.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
*(dest + 1) = *(src + 1);
}

return (dest);

}
