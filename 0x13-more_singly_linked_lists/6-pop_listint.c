#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to a lists's first element
 * Return: deleted elements' data
 */
int pop_listint(listint_t **head)
{
listint_t *new;
int file;
if (!head || !*head)
	return (0);
file = (*head)->n;
new = (*head)->next;
free(*head);
*head = new;
return (file)
}
