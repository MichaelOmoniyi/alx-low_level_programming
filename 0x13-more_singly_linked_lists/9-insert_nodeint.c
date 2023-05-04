#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node
 * at index of a listint_t linked list.
 *
 * @head: Pointer to the list.
 * @index: Node index.
 *
 * Return: 1, if it suceeded, -1 i it fails.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *temp = *head;
unsigned int node;

new_node = malloc(sizeof(listint_t));

if (new_node == NULL)
{
return (NULL);
}

new_node->n = n;

if (idx == 0)
{
new_node->next = temp;
*head = new_node;
return (new_node);
}

for (node = 0; node < (idx - 1); node++)
{
if (temp == NULL || temp->next == NULL)
{
return (NULL);
}

temp = temp->next;
}

new_node->next = temp->next;
temp->next = new_node;

return (new_node);
}
