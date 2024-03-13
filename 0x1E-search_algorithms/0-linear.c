#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: Array size
 * @value: The value being looked for
 * Return: first index where value is located (Success), else -1
 */
int linear_search(int *array, size_t size, int value)
{
	int j;

	if (array == NULL)
		return (-1);

	for (j = 0; j < (int)size; j++)
	{
		printf("Value checked array[%u] = [%d]\n", j, array[j]);
		if (value == array[j])
			return (j);
	}
	return (-1);
}
