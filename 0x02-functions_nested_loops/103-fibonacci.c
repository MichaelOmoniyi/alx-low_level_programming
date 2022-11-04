#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms
 *
 * Return: 0 when successful
 */

int main(void)
{
	int i;
	unsigned long int j, k, l, next, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		next = j + k;
		j = k;
		k = next;
	}

	printf("%lu\n", sum);

	return (0);
}
