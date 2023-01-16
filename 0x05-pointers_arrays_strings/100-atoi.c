#include "main.h"

/**
 * _atoi - Converts a string to integer.
 * @s: Inputted string.
 * Return: 0, when there's no number in string
 */

int _atoi(char *s)
{
int sign = 1;
unsigned int num = 0;
do {
if (*s == '-')
{
sign *= -1;
}
else if (*s >= '0' && *s <= '9')
{
num = (num * 10) + (*s - '0');
}
else if (num > 0)
{
break;
}
} while (*s++);
return (num *sign);
}
