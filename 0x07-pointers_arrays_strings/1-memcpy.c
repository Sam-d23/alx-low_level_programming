#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: original memory
 * @src: new memory
 * *@n: number of bytes
 * Return: new memory with n modified bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i = n;
for (; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
