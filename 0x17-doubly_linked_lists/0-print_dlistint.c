#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_dlistint - prints elements 
 * @h: list head
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int num;
	num = 0;
	if (h == NULL)
		return (num);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->num);
		num++;
		ptr = ptr->next;
	}
	return (num);
}
