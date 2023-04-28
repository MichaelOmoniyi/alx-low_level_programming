#include "lists.h"

/**
 * print_lists - Prints all the elements of a list_t list.
 * @h: singly linked list
 * Return: Number of elements in the list.
 */

size_t print_lists(const list_t *h)
{
size_t lists;

for (lists = 0; h != NULL; lists++)
{
if (h->str == NULL)
printf("[%d] %s\n", 0, "(nil)");
else
printf("[%d] %s\n", h->len, h->str);

h = h->next;
}
return (lists);
}
