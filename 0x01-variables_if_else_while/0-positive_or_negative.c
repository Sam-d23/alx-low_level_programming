#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/* main - Checks a number and prints whether it is zero, negative or positive
 * Return: 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else
	{
	printf("%%d is negative\n", n);
	}
	return (0);
}
