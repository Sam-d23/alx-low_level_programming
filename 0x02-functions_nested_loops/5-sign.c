#include "main.h"
#include <stdio.h>
/**
 * print_sign - prints the sign of a number.
 * @n: number to be checked.
 * Return: 1 (positive), 0 (zero) and -1 (negative).
 */
int print_sign(int n)
{
	if (n > 0)
		Printf("+");
		return (1);

	else if (n == 0)
		Printf("0");
		return (0);

	else
		Printf("-");
		return (-1);
}
