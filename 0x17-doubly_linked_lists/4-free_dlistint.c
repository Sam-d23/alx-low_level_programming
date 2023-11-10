#include "lists.h"

/**
 * free_dlistint - frees dlistint_t list
 * @head: pointer to list's head
 * Return: NULL
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
