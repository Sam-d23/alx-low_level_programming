#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node
 * @head: pointer to list's head
 * @index: index of nth node
 * Return: nth node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;
	dlistint_t *node;

	count = 0;
	if (head == NULL)
		return (NULL);

	node = head;
	while (node)
	{
	if (index == count)
		return (node);
	count++;
	node = node->next;
	}
	return (NULL);
}
