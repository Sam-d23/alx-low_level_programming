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
	size_t j;

	for (j = 0; h != NULL; j++)
	{
		printf("%d\n ", h->n);
		h = h->next;
	}
	return (j);
}
