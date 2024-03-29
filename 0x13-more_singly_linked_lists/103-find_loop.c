#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 *
 * @head: Points to the list.
 *
 * Return: The address of the node where the loop starts, or NULL if there is no loop.
 */

listint *find_listint_loop(listint_t *head)
{
listint_t *node1, *node 2;

if (head == NULL || head->next == NULL)
return (NULL);

node1 = head->next;
node2 = (head->next)->next;

while(node2)
{
if (node 1 == node 2)
{
node1 = head;

while (node1 != node2)
{
node1 = node1->next;
node2 = node2->next;
}

return(node1);
}
node1 = node1->next;
node2 = (node2->next)->next;
}

return (NULL);
}
