#include <stdio.h>
#include "main.h"
/**
 * main - prints the name of the program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
int count = 0;
if (argc > 0)
{
while (count < argc)
{
printf("%s\n", argv[count]);
count++;
}
}
return (0);
}
