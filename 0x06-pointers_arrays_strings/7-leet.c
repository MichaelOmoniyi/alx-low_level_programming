#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: string.
 * Return: Returns the encoded string.
 */

char *leet(char *str)
{
int i, j;

char *ch = "aAeEoOtTlL";
char *ch_encode = "4433007711";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; ch[j] != '\0'; j++)
{
if (str[i] == ch[j])
{
str[i] = ch_encode[j];
}
}
}
return (str);
}
