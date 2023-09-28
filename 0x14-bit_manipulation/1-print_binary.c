#include "main.h"
#include <stdio.h>
/*
 *
 */
void print_binary(unsigned long int n)
{
int j, tarry;
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
	_putchar('0');
}
