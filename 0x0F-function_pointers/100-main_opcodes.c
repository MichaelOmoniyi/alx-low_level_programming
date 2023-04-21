#include "function_pointers.h"

/**
 * op_codes - A function that print the opcode of itself.
 * @bytes: Number of Bytes to be printed.
 * Return: 0, when successful.
 */

/**
 * int op_codes(int bytes)
{
char *main_ptr = (char *)op_codes;

int i;

for (i = 0; i < bytes; i++)
{
if (i == bytes - 1)
{
printf("%02hhx\n", main_ptr[i]);
break;
}
printf("%02hhx ", main_ptr[i]);
}
return (0);
}
**/

/**
 * main - main function.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: 0, when successful.
 */

int main(int argc, char *argv[])
{
int bytes, i;
char *main_ptr;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

bytes = atoi(argv[1]);

if (bytes < 0)
{
printf("Error\n");
exit(2);
}

main_ptr = (char *)main;

for (i = 0; i < bytes; i++)
{
if (i == bytes - 1)
{
printf("%02hhx\n", main_ptr[i]);
break;
}
printf("%02hhx ", main_ptr[i]);
}

return (0);
}
