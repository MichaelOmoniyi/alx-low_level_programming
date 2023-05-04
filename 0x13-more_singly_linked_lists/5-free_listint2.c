#include "lists.h"

/**
 * free_listint - Frees a lsitint_t list.
 * @head: Pointer to the string.
 *
 * Return: void.
 */

void free_listint22(listint_t **head)
{
listint_t *temp;

if (head == NULL)
return;

while (*head)
{
temp = *head;
*head = (*head)->next;
free(temp);
}
head = NULL;
}
