#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: The list head.
 * Return: The number of elements in the list.
 */

size_t listint_len(const listint_t *h)
{
const listint_t *current = h;
size_t element_no = 0;

while (current != NULL)
{
element_no++;
current = current->next;
}
return (element_no);
}
