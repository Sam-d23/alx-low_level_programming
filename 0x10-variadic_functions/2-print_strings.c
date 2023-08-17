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
unsigned int i;
char *str;
va_list strings;
va_start(strings, n);
for (i = 0; i < n; i++)
{
str = va_arg(strings, char *);
if (!str)
	str = "(nil)";
if (!separator)
	printf("%s", str);
else if (separator && i == 0)
	printf("%s", str);
else
	printf("%s%s", separator, str);
}
printf("\n");
va_end(strings);
}
