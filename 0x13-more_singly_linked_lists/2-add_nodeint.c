#include "lists.h"

/**
 * add_nodeint - Add node to beginning of a listint_t list.
 * @head: Pointer to the head of the list.
 * @n: Node data.
 *
 * Return: Address of the new element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;

new_node = malloc(sizeof(listint_t));

if (new_node != NULL)
{
new_node->n = n;
new_node->next = *head;
}
else
{
return (NULL);
}

if (*head != NULL)
{
new_node->next = *head;
}
*head = new_node;
return (new_node);
}
