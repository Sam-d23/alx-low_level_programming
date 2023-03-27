#include "main.h"
#include<string.h>
/**
 * print_rev - prints a string in reverse
 * @s: the string to be reversed
 * return: 0
 */
void print_rev(char *s)
{
int line = 0;
int j;
while (*s != '\0')
{
line++;
s++;
}
s--;
for (j = line; j > 0; j--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
