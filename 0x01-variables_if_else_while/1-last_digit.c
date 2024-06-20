#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program assigns a random number to the variable n
 * each time it is executed and prints the last digit of the number stored
 * in n, followed by a message based on the value of the last digit.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int last_digit;

/* Seed the random number generator using the current time */
srand(time(0));
/* Assign a random number to n, shifted to include negative numbers */
n = rand() - RAND_MAX / 2;
/* Calculate the last digit of n */
last_digit = n % 10;

/* Print the last digit and the corresponding message */
printf("Last digit of %d is %d and is ", n, last_digit);
if (last_digit > 5)
{
	printf("greater than 5\n");
}
else if (last_digit == 0)
{
	printf("0\n");
}
else
{
	printf("less than 6 and not 0\n");
}

/* Return 0 to indicate successful execution */
return (0);
}
