#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to be alloca
 * Return: a pointer to the allocated memory
 * if malloc fails return 98
 */
void *malloc_checked(unsigned int b)
{
char *x;
x = malloc(b);
if (x == NULL)
	exit(98);
return (x);
}
