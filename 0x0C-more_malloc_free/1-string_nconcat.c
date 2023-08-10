#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of elements to concatenate from s2
 *  Return: pointer to the new allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int i, j, l1, l2;
i = 0; j = 0; l1 = 0; l2;
while (s1 && s2[l1])
	l1++;
while (s2 &&s2[l2])
	l2++;
if (n < l2)
	p = malloc(sizeof(char) * (l1 + n + 1));
else
p = malloc(sizeof(char) * (l1 + l2 + l1));
if (!p)
	return (NULL);
while (i < l1)
{
p[i] = s1[i];
i++;
}
while (n < l2 && i < (l1 + n))
	p[i++] = s2[j++];
while (n >= l2 && i < (l1 + l2))
	p[i++] = s2[j++];
p[i] = '\0';
return (p);
}
