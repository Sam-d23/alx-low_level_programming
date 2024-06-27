#include <main.h>

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: the times table to print.
 * If n is greater than 15 or less than 0,
 * the function should not print anything.
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	int i, j, product;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = i * j;

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (product < 10 && j != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
			else if (product < 100)
			{
				if (j != 0)
					_putchar(' ');
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else
			{
				_putchar((product / 100) + '0');
				_putchar(((product / 10) % 10) + '0');
				_putchar((product % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
