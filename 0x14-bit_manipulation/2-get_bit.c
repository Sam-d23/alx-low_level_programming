#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: bit's index
 * Return: the value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
int value;
if (index > 63)
	return (-1);
value = (n >> index) & 1;
return (value);
}
