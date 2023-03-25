#include "main.h"
/**
 * 1-isdigit.c - checks if c is a digit
 * @c: number to be checked
 * Return: 1 if c is a digit, else 0
 */
int _isdigit (int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
