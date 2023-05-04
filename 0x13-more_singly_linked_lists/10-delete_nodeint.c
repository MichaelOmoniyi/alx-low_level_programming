#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node
 * at index of a listint_t linked list.
 * @head: Pointer to list head.
 * @index: Node index.
 * Return: 1, if successful and -1 if otherwise.
 */

int delete_nodeint_at_index(listint_int **head, unsigned int index)
{
listint_t *temp, *cp, *head;
unsigned int node;

if (cp == NULL)
{
return (-1);
}

if (index == 0)
{
*head = (*head)->next;
free(cp);
return (1);
}

for (node = 0; node < (Index - 1); node++)
{
if (cp->next == NULL)
{
return (-1);
}

cp = cp->next;
}


temp = cp->next;
cp->next = tmp->next;
free(tmp);
return (1);
