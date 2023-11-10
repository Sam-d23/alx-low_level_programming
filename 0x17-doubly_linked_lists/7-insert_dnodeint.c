#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node
 * @h: pointer to head
 * @idx: position to insert node
 * @n: integer to be contained in new node
 * Return: node's address, or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = tmp;
	node->next = temp->next;
	tmp->next->prev = node;
	tmp->next = node

	return (node);
}
