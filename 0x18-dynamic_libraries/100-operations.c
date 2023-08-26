#include <stdio.h>

/**
 * add - add two integers together
 * @a: Integer
 * @b: Integer
 *
 * Return: The sum of the two integers
 */
int add(int a, int b)
{
return (a + b);
}

/**
 * sub - subtract two integer
 * @a: Integer
 * @b: Integer
 *
 * Return: The difference between two integers
 */
int sub(int a, int b)
{
return (a - b);
}

/**
 * mul - multiplies two numbers together
 * @a: Integer
 * @b: Integer
 *
 * Return: The product of two numbers
 */
int mul(int a, int b)
{
return (a * b);
}

/**
 * div - divides two integers
 * @a: Integer
 * @b: Integer
 *
 * Return: The division of two numbers
 */
int div(int a, int b)
{
if (b != 0)
{
return (a / b);
}
else
{
printf("Error: Division by zero!\n");
return (0);
}
}

/**
 * mod - Performs mod operation on two integers
 * @a: Integer
 * @b: Integer
 *
 * Return: The modulus of two integers
 */
int mod(int a, int b)
{
if (b != 0)
{
return (a % b);
}
else
{
printf("Error: Division by zero!\n");
return (0);
}
}

