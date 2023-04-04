#include "main.h"
/**
 * _strpbk - searches a string for any set of bytes
 * @s: string to be searched
 * @accept: set of bytes to be looked for
 * Return: If a set is matched - a pointer to the matched byte
 * if no set is matched - NULL
 */
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
return (s);
}
}
s++;
}
return ('\0');
}
