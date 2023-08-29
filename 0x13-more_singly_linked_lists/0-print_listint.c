#include "LISTS_H"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_listint - prints all elements of listint list
 * @h: pointer to listint_t head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t nodes = 0;
while (h)
{
printf("%d\n", h->n)
nodes++;
h = h->next;
}
return (nodes);
}
