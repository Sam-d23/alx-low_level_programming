#include "main.h"
#include <unistd.h>
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to the string containing 1s and 0s
 * Return: the resulting integer
 * if string contains other characters, or is NULL return 0
 */
unsigned int binary_to_uint(const char *b)
{
int j;
unsigned int decimal = 0;
if (b == NULL)
	return (0);
for (j = 0; b[j]; j++)
{
if (b[j] < '0' || b[j] > '1')
	return (0);
decimal = 2 * decimal + (b[j] - '0');
}
return (decimal);
}
