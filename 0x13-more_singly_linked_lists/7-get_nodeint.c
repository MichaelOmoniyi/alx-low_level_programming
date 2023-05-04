#include "lists.h"

/**
 * get_nodeint_at_index - Gets the nth node of  a linked_t linded list.
 * @head: Pointer to the list.
 * @index: Node index.
 * Return: The nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
size_t i;

for (i = 0; (i < index) && (head->next); i++)
{
head = head->next;
}

if (i < index)
{
return (NULL);
}

return (head);
}
