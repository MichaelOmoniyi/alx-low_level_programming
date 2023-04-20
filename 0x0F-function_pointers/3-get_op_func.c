#include "3-calc.h"

/**
 * get_op_func - A stuct that checks for the operator entered by the user
 * and apply the right operation.
 * @s: Operator given by the user.
 *
 * Return: Returns pointer to the function that correlate with the operator.
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
i = 0;

while (ops[i].op)
{
if (strcmp(ops[i].op, s) == 0)
{
return (ops[i].f);
}
i++;
}
return (NULL);
}
