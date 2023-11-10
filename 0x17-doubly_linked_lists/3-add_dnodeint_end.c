#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the end
 * @head: list head
 * @n: element's value
 * Return: new element's address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *h;
dlistint_t *node;

node = malloc(sizeof(dlistint_t));
if (node == NULL)
	return (NULL);
node->n = n;
node->next = NULL;

h = *head;

if (h != NULL)
{
while (h->next != NULL)
	h = h->next;
h->next = node;
}
else
{
*head = node;
}

node->prev = h;

return (node);
}
