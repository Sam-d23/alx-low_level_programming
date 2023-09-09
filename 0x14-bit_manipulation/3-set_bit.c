#include "main.h"
/**
 * set_bit - sets the bit value to 1 at an index
 * @*n: pointer to the number being changed
 * @index: bit index
 * Return: 1 (Success), 0 (failure)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
	return (-1);
*n = ((1UL << index) | *n);
return (1);
}
