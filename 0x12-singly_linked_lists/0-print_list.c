#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * size_t - prints all the elements of a list_t list
 * @list_t: list whose elements are to be printed
 * @h: pointer to list_t
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
size_t size = 0;
while (h)
{
if (h->str == NULL)
	printf("[0] (nil)\n");
else
	printf("[%u] %s\n", h->len, h->str);
size++;
h = h->next;
}
return (size);
}
