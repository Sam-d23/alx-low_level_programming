#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: pointer that converts
 * Return: an integer
 */
int _atoi(char *s)
{
int a = 0;
unsigned int un = 0; 
int max  = 1;
int sec = 0;
while (s[a])
{
if (s[a] == 45)
{
max *= -1;
}
while (s[a] >= 48 && s[a] <= 57)
{
sec = 1;
un = (un * 10) + (s[a] - '0');
a++;
}
if (sec == 1)
{
break;
}
a++;
}
un *= max;
return (un);
}
