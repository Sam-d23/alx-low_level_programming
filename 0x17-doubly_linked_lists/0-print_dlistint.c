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
	const dlistint_t *ptr = h;
	size_t x = 0;

	while (ptr && ptr->prev)
		ptr = ptr->prev;
	while (ptr)
	{
		printf("%d\n", ptr->x);
		x++;
		ptr = ptr->next;
	}
	return (x);
}
