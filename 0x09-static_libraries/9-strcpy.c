#include "main.h"
/**
 * char *_strcpy - copies the string pointed to by src
 * @dest: new destination of the string
 * @src: original destination of the string
 * Return : string 
 */
char *_strcpy(char *dest, char *src)
{
int x = 0;
int y = 0;
while (*(src + x) != '\0')
{
x++;
}
for (; y < x; y++)
{
dest[y] = src[y];
}
dest[x] = '\0';
return (dest);
}
