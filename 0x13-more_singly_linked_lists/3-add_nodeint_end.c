#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to the head of the list.
 * @n: The node data.
 * Return: Address of the new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node;
listint_t *pointer = *head;

new_node = malloc(sizeof(listint_t));
if (new_node != NULL)
{
new_node->n = n;
new_node->next = NULL;
}
else
{
return (NULL);
}

if (pointer != NULL)
{
while (pointer->next != NULL)
{
pointer = pointer->next;
}
pointer->next = new_node;
}
else
{
*head = new_node;
}
return (new_node);
}
