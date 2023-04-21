#include "3-calc.h"

/**
 * main - Perform simple arithmetic operations.
 * @argc: Number of argument.
 * @argv: Array of argument.
 * Return: Return result of the arithmetic operation.
 */

int main(int argc, char *argv[])
{
int arg1;
int arg2;
char operator;
int output;
int (*op_func)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

arg1 = atoi(argv[1]);
arg2 = atoi(argv[3]);
op_func = get_op_func(argv[2]);

if (!op_func)
{
printf("Error\n");
exit(99);
}

operator = *argv[2];
if ((operator == '/' || operator == '%') && arg2 == 0)
{
printf("Error\n");
exit(100);
}

output = op_func(arg1, arg2);

printf("%d\n", output);

return (0);
}
