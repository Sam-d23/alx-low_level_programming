#include "search_algos.h"
#include <math.h>

/**
 * jump_list - function that searches for a value in a sorted
 * list of integers using the Jump search algorithm.
 *
 * @list: pointer to the head of the list to search in
 * @size: array size
 * @value: value being searched for
 * Return: index of the found value
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i, a, b;
	listint_t *initial;

	if (list == NULL || size == 0)
		return (NULL);

	b = (size_t)sqrt((double)size);
	i = 0;
	a = 0;

	do {
		initial = list;
		a++;
		i = a * b;

		while (list->next && list->i < i)
			list = list->next;

		if (list->next == NULL && i != list->i)
			i = list->i;

		printf("Value checked at index [%d] = [%d]\n", (int)i, list->n);

	} while (i < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)initial->i, (int)list->i);

	for (; initial && initial->i <= list->i; initial = initial->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)initial->i, initial->n);
		if (initial->n == value)
			return (initial);
	}

	return (NULL);
}
