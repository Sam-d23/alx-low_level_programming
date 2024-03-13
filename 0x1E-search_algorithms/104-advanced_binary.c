#include "search_algos.h"

/**
 * recursive_search - applies recursion to searche for a value in an array of
 * integers using the Binary search algorithm
 *
 * @array: pointer to array's first element
 * @size: array size
 * @value: value being searched
 * Return: index of value's first occurrence
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t j;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (j = 0; j < size; j++)
		printf("%s %d", (j == 0) ? ":" : ",", array[j]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
	{
		if (half > 0)
			return (recursive_search(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (recursive_search(array, half + 1, value));

	half++;
	return (recursive_search(array + half, size - half, value) + half);
}

/**
 * advanced_binary - calls recursive_search to return
 * the index of the number
 *
 * @array: pointer to array's first element
 * @size: array size
 * @value: value being searched
 * Return: index of the value's first occurrence
 */
int advanced_binary(int *array, size_t size, int value)
{
	int i;

	i = recursive_search(array, size, value);

	if (i >= 0 && array[i] != value)
		return (-1);

	return (i);
}
