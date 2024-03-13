#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array
 * of integers using the Jump search algorithm
 *
 * @array: sorted array
 * @size: array size
 * @value: value being searched
 * Return: index where the value is stored
 */
int jump_search(int *array, size_t size, int value)
{
	int i, l, p, q;

	if (array == NULL || size == 0)
		return (-1);

	l = (int)sqrt((double)size);
	p = 0;
	q = i = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
		p++;
		q = i;
		i = p * l;
	} while (i < (int)size && array[i] < value);

	printf("Value found between indexes [%d] and [%d]\n", q, i);

	for (; q <= i && q < (int)size; q++)
	{
		printf("Value checked array[%d] = [%d]\n", q, array[q]);
		if (array[q] == value)
			return (q);
	}

	return (-1);
}
