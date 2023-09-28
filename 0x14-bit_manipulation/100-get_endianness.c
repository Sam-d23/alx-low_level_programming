#include "main.h"
#include <stdio.h>
/**
 * get_endianness -  checks the endianness
 * Return: 0 (big endian), 1 (small endian)
 */
int get_endianness(void)
{
unsigned int j = 1;
char *b = (char *) &j;
return (*b);
}
