#include "main.h"
#include <stdio.h>
#include <string.h>
#include <math.h>
/**
 * binary_to_uint -  converts a binary to unsigned int
 * @b: pointer to binary string
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
int length = strlen(b);
unsigned int result = 0;
int i,j;
for (i = length - 1, j = 0; i >= 0; i--, j++)
{
if (b[i] == '1')
{
result += (unsigned int)pow(2, j);
}
else if (binary[i] != '0')
{
return (0);
}
}
return (result);
}
