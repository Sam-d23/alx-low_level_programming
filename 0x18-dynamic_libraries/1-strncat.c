#include "main.h"
/**
 *_strncat - concatenates two strings using not more than n bytes from src
 *@dest: input
 *@src: input
 *@n: input
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int x;
int y;
x = 0;
while (dest[x] != '\0')
{
x++;
}
y = 0;
while (y < n && src[y] != '\0')
{
dest[x] = src[y];
x++;
y++;
}
dest[x] = '\0';
return (dest);
}
