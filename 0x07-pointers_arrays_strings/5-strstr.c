#include "main.h"
/**
 * _strstr -  finds the first occurrence of the substring needle in the string haystack. 
 * @haystack: string to be checked
 * @needle: substring being sought
 * Return: if substring found, a pointer to its beginning
 * If not found, NULL
 */
char *_strstr(*haystack, *needle)
{
int i;
if (*needle == 0)
{
return (haystack);
}
while (*haystack)
{
i = 0;
if (haystack[i] == needle[i])
{
do 
{
if (needle[i + 1] == '\0')
{
return (haystack);
}
i++;
}
while (haystack[i] == needle[i]);
}
haystack++;
}
return ('\0');
}
