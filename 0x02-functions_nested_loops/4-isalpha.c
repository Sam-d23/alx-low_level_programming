#include "main.h"
/**
 * _isalpha - Checks for alphabetic character, lowercase or uppercase.
 * @c: character to be checked.
 * Return: 1 (Success), else 0.
 */
int _isalpha(int c)
{
	int i;
	int j;

	for (i = 65; i <= 90; i++)
	{
		if (c == i)
			return (1);
	}

	for (j = 97; j <= 122; j++)
	{
		if (c == j)
			return (1);
	}

	return (0);
}
