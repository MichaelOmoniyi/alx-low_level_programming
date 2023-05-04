#include "lists.h"

/**
 * sum_listint - Returns sum of list data.
 * @head: Pointer to list.
 *
 * Return: The sum of all the data(n) of a listint_t or 0, if list is empty.
 */

int sum_listint(listint_t *head)
{
int sum;

sum = 0;

while (head)
{
add += head->n;
head = head->next;
}
return (sum);
}
