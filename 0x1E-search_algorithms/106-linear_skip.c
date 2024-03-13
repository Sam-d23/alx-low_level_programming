#include "search_algos.h"

/**
 * linear_skip - function that searches for a value
 * in a sorted skip list of integers.
 *
 * @list: pointer to the head of the skip list to search in
 * @value: value being searched
 * Return:  pointer on the first node where value is located
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *search;

	if (list == NULL)
		return (NULL);

	search = list;

	do {
		list = search;
		search = search->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)search->index, search->n);
	} while (search->express && search->n < value);

	if (search->express == NULL)
	{
		list = search;
		while (search->next)
			search = search->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)search->index);

	while (list != search->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
