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
int n, lastd;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastd = n % 10;
if (lastd > 5)
{
printf("last digit of %d is %d and is greater than 5\n", n, lastd);
}
else if (lastd == 0)
{
printf("last digit of %d is %d and is0\n", n, lastd);
}
else if (lastd < 6 && lastd != 0)
{
printf("last digit of %d is %d and is less than 6 and not 0", n, lastd);
}
return (0);
}
