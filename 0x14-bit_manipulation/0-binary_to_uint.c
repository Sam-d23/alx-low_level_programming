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
int i;
unsigned int result = 0;
if (b == NULL)
{
return (0);
}
for (i = 0; b[i]; i++)
{
if (b[i] < '0' || b[i] > '1')
	return (0);
result = 2 * result + (b[i] - '0');
}
return (result);
}
