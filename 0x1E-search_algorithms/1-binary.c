#include "search_algos.h"
#include <stddef.h>

/**
 * binary_search - applies binary search algorithm to search for
 * a value in a sorted array of integers
 *
 * @array: sorted array of integers
 * @size: length of the array
 * @value: the integer value being searched for
 * Return: Index where value is located (Success), else -1.
 */

int binary_search(int *array, size_t size, int value)
	{
	size_t j, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		printf("Searching in array: ");
		for (j = l; i < r; j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[j]);

		j = l + (r - l) / 2;
		if (array[j] == value)
			return (j);
		if (array[j] > value)
			r = j - 1;
		else
			l = j + 1;
	}
	return (-1)
	}
