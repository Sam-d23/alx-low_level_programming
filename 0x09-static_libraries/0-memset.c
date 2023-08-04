#include "main.h"
/**
 * _memset - assigns the value to the block of memory
 * @s: first address of the memory
 * @b: the desired value
 * @n: number of bytes that will change
 * Return: new array with new value for n bytes
 */
char *_memset (char *s, char b, unsigned int n)
{
int a = 0;
for (; n > 0; a++)
{
s[a] = b;
n--;
}
return (s);
}
