#include "main.h"
#include <stdio.h>
/**
 * set_bit - sets the bit at index to 1
 * @n: pointer to number being evaluated
 * @index: index  being set
 * Return: 1 (Success), -1 (failure)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
	return (-1);
*n = ((1UL << index) | *n);
return (1);
}
