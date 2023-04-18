#include <stdio.h>

/**
 * f_name - Prints the name of the file it was compiled from.
 * Return: 0, if successful and 1 if not.
 */

int main(void)
{
    printf("%s\n", __FILE__);
    return(0);
}
