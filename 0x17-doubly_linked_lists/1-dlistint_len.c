#include "lists.h"

/**
 * dlistint_len - returns dlist length
 * @h: head node address
 * Return: list size
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t j = 0;

	while (h)
	{
		h = h->next;
		j++;
	}
	return (j);
}
