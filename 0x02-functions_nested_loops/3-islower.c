#include "main.h"
/**
 * _islower - Checks for lowercase character.
 * Return: 1 (Success), else 0.
 */
int _islower(int c)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
