#include "function_pointers.h"

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
