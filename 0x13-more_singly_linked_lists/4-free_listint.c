#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: The head of the list.
 *
 * Return: Void.
 */

void free_listint(listint_t *head)
{
listint_t *temporary;

while (head != NULL)
{
temporary = head;
head = head->next;
free(temporary);
}
}
