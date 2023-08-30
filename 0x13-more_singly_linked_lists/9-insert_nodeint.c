#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: pointer to the list's first node
 * @idx: index for new node
 * @n: data in the new node
 * Return: address of the new node, else NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int j;
listint_t *updated;
listint_t *modified = *head;
updated = malloc(sizeof(listint_t));
if (!updated || !head)
	return (NULL);
updated->n = n;
updated->next = NULL;
if (idx == 0)
{
updated->next = *head;
*head = updated;
return (updated);
}
for (j = 0; modified && j < idx; j++)
{
if (j == idx - 1)
{
updated->next = modified->next;
modified->next = updated;
return (updated);
}
else
modified = modified->next;
}
return (NULL);
}
