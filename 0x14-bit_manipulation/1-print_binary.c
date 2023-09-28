#include "main.h"
#include <stdio.h>
/**
 * _pow - calculates power
 * @base: exponent's base
 * @power: exponent's power
 * Return: value of result
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
unsigned long int number;
unsigned int i;
number = 1;
for (i = 1; i <= power; i++)
	number *= base;
return (number);
}
/* print_binary - prints binary representation
 * @n: decimal number to be represented
 */
void print_binary(unsigned long int n)
{
unsigned long int divisor, checker;
char state;
state = 0;
divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
while (divisor != 0)
{
checker = n & divisor;
if (checker == divisor)
{
state = 1;
_putchar('1');
}
else if (state == 1 || divisor == 1)
{
_putchar('0');
}
divisor >>= 1;
}
}
