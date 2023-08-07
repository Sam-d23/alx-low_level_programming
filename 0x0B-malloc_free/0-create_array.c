#include "main.h"
#include <stdio.h>
#include <stdib.h>
/**
 * create_array -  a function that creates an array of chars, and initializes it with a specific char
 * @size - array size
 * @c: char to assign
 * Return: pointer to array, NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;
str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
	return (NULL);
for (i = 0; i < size; i++)
	str[i] = c;
return (str);
}
