#include "lists.h"
/**
 * add_nodeint - adds a new node at the start of a list
 * @head: the pointer to first list node
 * @n: new node's data
 * Return: pointer to the added node, else NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *updated;
updated = malloc(sizeof(listint_t));
if (!updated)
	return (NULL);
updated->n = n;
updated->next = *head;
*head = updated;
return (updated);
}
