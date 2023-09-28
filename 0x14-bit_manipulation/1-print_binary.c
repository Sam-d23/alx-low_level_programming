#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints binary representative
 * @n: number to be represented
 * Return: void
 */
void print_binary(unsigned long int n)
{
int j;
unsigned long int bit;
bit = n >> j;
unsigned int checker = 32768;
for (j = 63; j >= 0; j--)
{
while (checker > 0)
{
if ((n & checker) == 0)
	_putchar('0');
else
	_putchar('1');
checker = checker >> 1;
}
}
}
