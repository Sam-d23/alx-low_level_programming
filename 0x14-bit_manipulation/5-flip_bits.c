#include "main.h"
#include <stdio.h>
/**
 * flip_bits - returns number of bits
 * that should be flipped to go from
 * one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int j, tarry = 0;
unsigned long int number;
unsigned long int exc = n ^ m;
for (j = 63; j >= 0; j--)
{
number = exc >> j;
if (number & 1)
	tarry++;
}
return (tarry);
}
