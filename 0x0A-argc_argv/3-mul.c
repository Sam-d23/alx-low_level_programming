#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the multiplication of two integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{
int result, x, y;
if (argc != 3)
{
printf("%s\n", "Error");
return (1);
}
x = atoi(argv[1]);
y = atoi(argv[2]);
result = x *y;
printf("%d\n", result);
return (0);
}
