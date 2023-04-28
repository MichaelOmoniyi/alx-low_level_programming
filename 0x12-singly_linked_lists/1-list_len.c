#include "lists.h"
/**
 * list_len - Returns the number of elements in a list.
 * @h: singly linked list.
 * Return: Number of element in the list.
 */

size_t list_len(const list_t *h)
{
size_t nodes_no;

nodes_no = 0;
while (h != NULL)
{
h = h->next;
nodes_no++;
}
return (nodes_no);
}
