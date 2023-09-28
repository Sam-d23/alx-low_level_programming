#include "main.h"
#include <stdio.h>
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to be assessed
 * @index: index of bit
 * Return: value of index
 */
int get_bit(unsigned long int n, unsigned int index)
{
int value;
if (index > 63)
	return (-1);
value = (n >> index) & 1;
return (value);
}
