#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: pointer that converts
 * Return: an integer
 */
int _atoi(char *s)
{
int sign;
unsigned int num;
char *temp;
temp = s;
num = 0;
sign = 1;
while (*temp != '\0' && (*temp < '0' || *temp > '9'))
{
if (*temp == '-')
{
sign *= -1;
}
temp++;
}
if (*temp != '\0')
{
do {
num = num * 10 + (*temp - '0');
temp++;
} while (*temp >= '0' && *temp <= '9');
}
return (num *sign);
}
