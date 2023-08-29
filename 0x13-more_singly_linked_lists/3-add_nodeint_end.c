#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: pointer to the first node
 * @n: data to be contained in the added node
 * Return: new element's address, else NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *modified;
listint_t *updated = *head;
modified = malloc(sizeof(listint_t));
if (!modified)
	return (NULL);
modified->n = n;
modified->next = NULL;
if (*head == NULL)
{
*head = modified;
return (modified);
}
while (updated->next)
	updated = updated->next;
updated->next = modified;
return (modified);
}
