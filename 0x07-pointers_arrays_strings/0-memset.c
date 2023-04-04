#include "main.h"
/**
 * _memset - puts a specific value in a given block of memory
 * @s: starting address of memory
 * @b: specific value
 * @n: number of bytes to be modified.
 * Return: new array obtained
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
