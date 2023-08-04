#include "main.h"
/**
 *_strlen - returns the length of the input string
 *@s: input string
 *Return: length
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
