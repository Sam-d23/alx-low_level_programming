#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints binary representative
 * @n: number to be represented
 * Return: void
 */
void print_binary(unsigned long int n)
{
unsigned int checker = 32768;
while (checker > 0)
{
if ((n & checker) == 0)
	_putchar('0');
else
	_putchar('1');
checker = checker >> 1;
}
}
