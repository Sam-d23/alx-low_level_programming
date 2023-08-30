#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint -reverses a listint_t linked list
 * @head: pointer to the first element
 * Return: head of the new file
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *old = NULL;
listint_t *next = NULL;
while (*head)
{
next = (*head)->next;
(*head)->next = old;
old = *head;
*head = next;
}
*head = old;
return (*head);
}
