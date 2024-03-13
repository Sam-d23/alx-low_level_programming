#include "search_algos.h"

/**
 * interpolation_search -  function that searches for a value in a sorted
 * array of integers using the Interpolation search algorithm
 *
 * @array: pointer to the first array element
 * @size: array size
 * @value: value being searched
 * Return: index where the value frst emerges
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;
	double function;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (size)
	{
		function = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		pos = (size_t)(low + function);
		printf("Value checked array[%d]", (int)pos);

		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[pos]);
		}

		if (array[pos] == value)
			return ((int)pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;

		if (low == high)
			break;
	}

	return (-1);
}
