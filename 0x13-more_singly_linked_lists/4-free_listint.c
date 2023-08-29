#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a list
 * @head: the list being freed
 */
void free_listint(listint_t *head)
{
listint_t *list;
while (head)
{
list = head->next;
free(head);
head = list;
}
}
