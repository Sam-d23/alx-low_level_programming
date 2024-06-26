#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	/* Print lowercase alphabet */
	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}

	/* Print uppercase alphabet */
	for (ch = 65; ch <= 90; ch++)
	{
		putchar(ch);
	}

	/* Print new line */
	putchar('\n');

	return (0);
}
