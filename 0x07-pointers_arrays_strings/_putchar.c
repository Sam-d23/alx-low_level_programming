#include "main.h"
#include<unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: character to be printed
 * Return: On Success 1
 * on faiure, -1 is returned and errno set appropriately
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
