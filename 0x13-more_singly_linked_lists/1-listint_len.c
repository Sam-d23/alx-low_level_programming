#include "lists.h"
/**
 * listint_len - returns the number of elements
 * @h: linked list to be evaluated
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
size_t number = 0;
while (h)
{
number++;
h = h->next;
}
return (number);
}
