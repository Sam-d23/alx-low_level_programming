#include "main.h"
#include<string.h>
/**
 * print_rev - prints a string in reverse
 * @s: the string to be reversed
 */
void print_rev(char *s)
{
int j, n;
s = "kenya";
n = strlen(s);
for (j = n-1;  j>=0; j--)
{
_putchar(s[j]);
}
}
