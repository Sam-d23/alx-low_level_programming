#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets bit at index to 0
 * @n: pointer to number
 * @index: index being checked
 * Return: 1 (Success), -1 (failure)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
	return (-1);
*n = (~(1UL << index) & *n);
return (1);
}
