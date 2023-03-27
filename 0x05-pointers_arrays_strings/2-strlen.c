#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
int the_length = 0;
while (*s != '\0')
{
the_length++;
s++;
}
return (the_length);
}
