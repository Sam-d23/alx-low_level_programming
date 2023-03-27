#include "main.h"
/**
 * puts2 - a function that prints every other character of a string
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
int line = 0;
int p = 0;
char *w = str;
int a;
while (*w != '\0')
{
w++;
line++;
}
p = line - 1;
for (a = 0; a <= p; a++)
{
if (a % 2 == 0)
{
_putchar(str[a]);
}
}
_putchar('\n');
}
