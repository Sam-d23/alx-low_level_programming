#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint -  returns the sum of all the data (n) of a list
 * @head: list's first node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
int result = 0;
listint_t *new = head;
while (new)
{
result += new->n;
new = new->next;
}
return (result);
}
