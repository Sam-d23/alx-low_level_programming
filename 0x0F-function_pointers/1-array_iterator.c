#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array element on a new l
 * @array: array
 * @size: elements to print
 * @action: pointer
 * Return: void
 */
void array_iterator(int *array, size_t, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
	return;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
