#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: The list head.
 * Return: Returns the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
size_t nodeno = 0;
const listint_t *node_t = h;

while (node_t != NULL)
{
printf("%d\n", node_t->n);
nodeno++;
node_t = node_t->next;
}

return (nodeno);
}
