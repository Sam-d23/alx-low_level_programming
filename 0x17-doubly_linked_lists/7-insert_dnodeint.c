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
	dlistint_t *node;
	dlistint_t *head;
	unsigned int j;

	node = NULL;
	if (idx == 0)
		node = add_dnodeint(h, n);
	else
	{
		head = *h;
		j = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (j == idx)
			{
				if (head->next == NULL)
					node = add_dnodeint_end(h, n);
				else
				{
					node = malloc(sizeof(dlistint_t));
					if (node != NULL)
					{
						node->n = n;
						node->next = head->next;
						node->prev = head;
						head->next->prev = node;
					        head->next = node;	
					}
				}
				break;
			}
			head = head->next;
			j++;
		}
	}

	return (node);
}
