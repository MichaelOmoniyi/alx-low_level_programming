#include "lists.h"

/**
 * pop_listint - Deletes the head node of listint_t
 * @head: Pointer to next list.
 *
 * Return: The head node's data(n);
 */

int pop_listint(listint_t **head)
{
listint_t *tmp;
int n;

tmp = *head;

if (tmp == NULL)
{
return (0);
}

*head = tmp->next;
n = tmp->n;
free(tmp);
return (n);
}
