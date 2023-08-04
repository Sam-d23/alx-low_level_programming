#include "main.h"
/**
 * _memcpy - this function copies memory area
 * @dest: where memory is stored
 * @src: where to copy the memory
 * @n: number of bytes
 * Return: copied memory with number of changed bytes as n
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int j = 0;
int k = n;
for (; j < k; j++)
{
dest[j] = src[j];
n--;
}
return (dest);
}
