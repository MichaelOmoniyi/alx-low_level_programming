#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: input character
 * Return: 1 when positive, 0 when zero, -1 when negative
 */

int print_sign(int n)
{
	int sign = 0;

	if (n > 0)
	{
		_putchar ('+');
		sign = 1;
	}
	else if (n < 0)
	{
		_putchar ('-');
		sign = -1;
	}
	else
	{
		_putchar ('0');
	}
	return (sign);
}
