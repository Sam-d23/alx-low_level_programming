#include <stdio.h>
#include "main.h"
#include "100-get_endianness.c"
int main(void)
{
int n;
n = get_endianness();
if (n != 0)
{
printf("Little Endian\n");
}
else
{
printf("Big Endian\n");
}
return (0);
}
