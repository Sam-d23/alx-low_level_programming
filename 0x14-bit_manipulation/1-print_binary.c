#include "main.h"
/**
 * print_binary - prints the binary equivalent for number
 * @n: number to be represented
 */
void print_binary(unsigned long int n)
{
int j, rec = 0;
unsigned long int number;
for (j = 63; j >= 0; j--)
{
number = n >> j;
if (number & 1)
{
putchar('1');
rec++;
}
else if (rec)
	putchar('0');
}
if (!rec)
	putchar('0');
}
