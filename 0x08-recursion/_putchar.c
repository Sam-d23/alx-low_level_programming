#include<unistd.h>
/**
 * program for putchar.c
 */
int _putchar(char c)
{
return write(STDOUT_FILENO, &c, 1);
}
