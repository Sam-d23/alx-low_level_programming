#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: the string to be measured
 * Return: the length of the string
 */
int _strlen_recursin(char *s)
{
int length  = 0;
if (*s)
{
length++;
length += _strlen_recursion(s + 1);
}
return (length);
}
