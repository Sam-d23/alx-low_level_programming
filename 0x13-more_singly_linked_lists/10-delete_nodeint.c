#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to first node
 * @index: index for the node being deleted
 * Return: 1 (Success), else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *node = *head;
listint_t *new = NULL;
unsigned int j = 0;
if (*head == NULL)
	return (-1);
if (index == 0)
{
*head = (*head)->next;
free(node);
return (1);
}
while (j < index - 1)
{
if (!node || !(node->next))
	return (-1);
node = node->next;
j++;
}
new = node->next;
node->next = new->next;
free(new);
return (1);
}
