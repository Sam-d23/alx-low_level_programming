#include "search_algos.h"

/**
  * _binary_search - function that searches for a value in a sorted
  * array of integers using the binary search algorithm
  *
  * @array: points to the first array element.
  * @left: first index of the array/subarray being searched.
  * @right: last index of the array/subarray being searched.
  * @value: value being searched.
  *
  * Return: index where the value first occurs, else -1
  *
  * Description: Prints the array/subarray being searched after each change.
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t j;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (j = left; j < right; j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[j]);

		j = left + (right - left) / 2;
		if (array[j] == value)
			return (j);
		if (array[j] > value)
			right = j - 1;
		else
			left = j + 1;
	}

	return (-1);
}

/**
  * exponential_search - function that searches for a value in a sorted
  * array of integers using the Exponential search algorithm
  *
  * @array: points to the first array element.
  * @size: number of elements in the array.
  * @value: value to be searched.
  *
  * Return: index where the value is located, else -1.
  *
  * Description: Prints each compared value in the array.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t k = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (k = 1; k < size && array[k] <= value; k = k * 2)
			printf("Value checked array[%ld] = [%d]\n", k, array[k]);
	}

	right = k < size ? k : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", k / 2, right);
	return (_binary_search(array, k / 2, right, value));
}
