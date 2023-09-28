#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints binary representative
 * @n: number to be represented
 * Return: void
 */
void print_binary(unsigned long int n)
{
int j, tarry = 0;
unsigned long int bit;
for (j = 63; j >= 0; j--)
{
bit = n >> j;
if (bit & 1)
{
_putchar('1');
tarry++;
}
else if (tarry)
{
_putchar('0');
}
}
if (!tarry)
{
_putchar('0');
}
}
