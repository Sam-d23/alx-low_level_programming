#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints binary representative
 * @n: number to be represented
 * Return: void
 */
void print_binary(unsigned long int n)
{
if (n > 1)
{
print_binary(n >> 1);
}
_putchar(n & 1);
}
int main(void)
{
print_binary(n);
_putchar('\n');
return (0);
}
