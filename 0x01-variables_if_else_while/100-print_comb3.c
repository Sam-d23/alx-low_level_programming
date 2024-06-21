#include <stdio.h>
/**
 * main - prints combination of two integers,
 * in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	for (a = 48; a <= 56; a++)
	{
		for (b = 49; b <= 57; b++)
		{
			putchar(a);
			putchar(b);
			if (!(a == '8' && b == '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
