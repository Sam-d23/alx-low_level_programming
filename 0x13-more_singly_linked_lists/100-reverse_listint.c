#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint -reverses a listint_t linked list
 * @head: pointer to the first element
 * Return: head of the new file
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *former = NULL;
listint_t *latter = NULL;
while (*head)
{
latter = (*head)->next;
(*head)->next = former;
former = *head;
*head = latter;
}
*head = former;
return (*head);
}
