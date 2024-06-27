#include "main.h"
/**
 * _islower - Checks for lowercase character.
 * Return: 1 (Success), else 0.
 */
int _islower(int c)
{
	if (97 <= c <= 122)
		return (1);
	return (0);
}
