#include<stdio.h>
#include<unistd.h>

/**
 * main - A C program that that prints a line to the standard error
 * Return: 1 (Success)
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
