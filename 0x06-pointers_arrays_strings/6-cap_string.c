#include "main.h"

/**
 * cap_string - Capitalizes all word of a string.
 * @str: String.
 * Return: Returns the capitalized string.
 */

char *cap_string(char *str)
{
int i, j;
int check;
char punct[] = ",;.!?(){}\n\t\" ";

for (i = 0, check = 0; str[i] != '\0'; i++)
{
if (str[0] > 96 && str[0] < 123)
check = 1;

for (j = 0; punct[j] != '\0'; j++)
{
if (punct[j] == str[i])
check = 1;
}

if (check)
{
if (str[i] > 96 && str[i] < 123)
{
str[i] -= 32;
check = 0;
}
else if (str[i] > 64 && str[i] < 91)
check = 0;
else if (str[i] > 47 && str[i] < 58)
check = 0;
}
}
return (str);
}
