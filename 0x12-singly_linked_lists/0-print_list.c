#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * size_t - prints all the elements of a list_t list.
 * @list_t: list whose elements are to be printed 
 * @h: pointer to list_t
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
size_t size = 0;
struct list_s *h = malloc(sizeof(struct list_s));
while (h)
{
if (!h->str)
	printf("|0| (nil)\n");
else
	printf("|%u| %s\n", h->len, h->str);
h = h->next;
size++;
}
return (size);
}
