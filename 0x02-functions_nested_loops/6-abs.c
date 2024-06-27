#include "main.h"
#include <stdio.h>

/**
 * _abs - Computes the absolute value of an integer.
 * @n: inputted integer.
 * Return: absolute value.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	return (n);
}
