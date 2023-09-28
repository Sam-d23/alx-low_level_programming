#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * binary_to_uint -  converts a binary to unsigned int
 * @b: pointer to binary string
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
if (b == NULL)
{
return (0);
}
unsigned int result = 0;
int len = strlen(b);
for (int i = 0; i < len; i++)
{
char c = b[i];
if (c == '0')
{
result = result * 2;
}
else if (c == '1')
{
result = result * 2 + 1;
}
else
{
return (0);
}
}
return (result);
}
