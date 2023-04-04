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
int len;
len = 0;

while (dest[len] != '\0')
{
len++;
}

for (i = 0; i < n; i++)
{
len =+ 1;
*(dest + len) = *(src + 1);
}

return (dest);

}
