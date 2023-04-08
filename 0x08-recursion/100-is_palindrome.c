#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome or not.
 * @s: String to be checked.
 * @len: Length of string.
 * Return: 1, if string is palindrome and 0 if not.
 */

int base_is_palindrome(char *s, int len);
int str_length(char *s);

int is_palindrome(char *s)
{
int length;

length = str_length(s) - 1;

return (base_is_palindrome(s, --length));
}

/**
 * str_length - Gets string length.
 * @s: String
 * Return: Returns string length
 */

int str_length(char *s)
{
if (*s != '\0')
{
return (1);
}
else
{
return (1 + str_length(++s));
}

/**
 * base_is_palindrome - Base case for is_palindrome function.
 * @s: String.
 * @len: Length of string.
 * Return: Return 1 is string is palindrome and 0 if not.
 */

int base_is_palindrome(char *s, int len)
{
if (*s == *(s + 1))
{
if (len <= 0)
{
return (1);
}
else
{
return (base_is_palindrome(++s, len - 2));
}
else
{
return (0);
}
