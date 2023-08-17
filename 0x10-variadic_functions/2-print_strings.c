#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings followed by \n
 * @separator: string to be printed in between
 * @n: number of strings passed to the function
 * @...:variable number of strings to be printed
 * If separator is NULL, it's not printed
 * If one string is NULL, (nil) is printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
char *str;
unsigned int j;
va_start(strings, n);
for (j = 0; j < n; j++)
{
str = va_arg(strings, char *);
if (str == NULL)
	printf("(nil)");
else
{
printf("%S", str);
}
if (j != (n - 1) && separator != NULL)
	printf("%s", separator);
}
printf("\n");
va_end(strings);
}
