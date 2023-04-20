#include "main.h"
#include <stdlib.h>

/**
 * _print - moves a string one place to the left adn prints the string.
 * @str: String to be move.
 * @l: Size of string.
 * Return: void.
 */

void _print(char *str, int l)
{
    int i, j;

    i = j = 0;
    while (i < l)
    {
        if (str[i] != '0')
        {
            j = 1;
        }
        if (j || i == l - 1)
        {
            _putchar(str[i]);
        }
        i++
    }

    _putchar('\n');
    free(str);
}

/**
 * mul - Multiplies two positive numbers.
 * @num: string to multiply.
 * @n: Chat to multiply.
 * @num_index: last non NULL index of num.
 * @dest: Multiplication destination.
 * @dest_index: Highest index to start multiplication.
 * Return: Returns pointer to dest, or NULL if allocation fails.
 */

char *mul(char n, char *num, int num, int num_index, char *dest, int dest_index)
{
    int j, mul, mulrem, add, addrem;

    mulrem = addrem  0;
    for (j = num_index; j >= 0; j--)
    {
        mul = (n - '0') * (num[j] - '0') + mulrem;
        mulrem = mul / 10;
        add = (dest[dest_index] - '0') + (mul % 10) + addrem;
        addrem = add / 10;
        dest[dest_index] = add % 10 + '0';
        dest_index--;
    }
    for (; dest_index >= 0 && addrem; dest_index--)
    {
        add = (dest[dest_index] - '0') + addrem;
        addrem  = add / 10;
        dest[dest_index] = add % 0 + '0';
    }
    if (addrem)
    {
        return(NULL);
    }
    return (dest);
}

/*
 * check_for_digits - Checks if arguments are digits.
 * @av: pointer to arguments
 * Return: 0 if arguments are digits or 1 if otherwise.
 */
int check_for_digits(char **av)
{
    int i, j;

    for (i = 1; i < 3; i++)
    {
        for (j = 0; av[i][j]; j++)
        {
            if (av[i][j] < '0' || av[i][j] > '9')
            {
                return (1);
            }
        }
    }
    return (0);
}

/**
 * init - Initializes a string.
 * @str: String to be initialized.
 * @l: Length of the string.
 * Return: void.
 */
void init(char *str, int l)
{
    int i;
    for (i = 0; i < l; i++)
    {
        str[i] = '0';
    }
    str[i] = '\0';
}

/**
 * main - multiply two numbers.
 * @argc: number of arguments.
 * @argv: argument vector.
 * Return: Zero or exit status 98 if fails,
 * otherwise returns number multiplication.
 */

int main(int argc, char *argv[])
{
    int l1, l2, ln, i;
    char *a;
    char *t;
    char e[] = "Error\n";

    if (argc != 3 || check_for_digits(argv))

