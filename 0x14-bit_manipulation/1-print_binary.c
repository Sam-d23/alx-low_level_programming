#include "main.h"
#include <stdio.h>
/**
 * _pow - calculates power
 * @base: exponent's base
 * @Power: exponent's power
 * Return: value of result
 */
unsigned long int _pow(unsigned int base, unsigned int Power)
{
unsigned long int number;
unsigned int i;
number = 1;
for (i = 1; i <= Power; i++)
	number *= base;
return (number);
}
/* print_binary - prints binary representation
 * @n: decimal number to be represented
 */
void print_binary(unsigned long int n)
{
unsigned long int Divisor, checker;
char state;
state = 0;
Divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
while (Divisor != 0)
{
checker = n & Divisor;
if (checker == Divisor)
{
state = 1;
_putchar('1');
}
else if (state == 1 || Divisor == 1)
{
_putchar('0');
}
Divisor >>= 1;
}
}
