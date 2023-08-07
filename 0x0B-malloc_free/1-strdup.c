#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
char *sam;
int j, k = 0;
if (str == NULL)
	return (NULL);
j = 0;
while (str[j] != '\0')
	j++;
sam = malloc(sizeof(char) * (j + 1));
if (sam == NULL)
	return (NULL);
for (k = 0; str[k]; k++)
	sam[k] = str[k];
return (sam);
}
