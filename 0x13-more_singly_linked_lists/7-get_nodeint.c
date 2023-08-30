#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to first node
 * @index: index of the node, starting at 0
 * Return: nth node, else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int j = 0;
listint_t *new = head;
while (new && j < index)
{
new = new->next;
j++;
}
return (new ? new : NULL);
}
