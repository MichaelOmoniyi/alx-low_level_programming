#include "main.h"

/**
 * _islower - checks for lower case character
 *@c: An input character
 * Return: 0, if character is uppercase and 1 if otherwise
 */

int _islower(int c)
{
	char ch;
	int lower = 0;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == c)
			lower = 1;
	}
	return (lower);
}
