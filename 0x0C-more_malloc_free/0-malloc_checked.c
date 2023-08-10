#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to be allocated
 * Return: pointer to the allocated memory
 * if malloc fails return 98
 */
void *malloc_checked(unsigned int b)
{
char *i;
i = malloc(b);
if (i == NULL)
	exit(98);
return (i);
}
