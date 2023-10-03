#include "main.h"
#include <stdlib.h>
#include <stdio.h>
char *create_buffer(char *f);
void file_close(int fil);
/**
 * create_buffer - allocates 1024 bytes for buffer
 * @f: name of file
 * Return: pointer to the allocated buffer
 */
char *create_buffer(char *f)
{
char *buf;
buf = malloc(sizeof(char) * 1024);
if (buf == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f);
exit(99);
}
return (buf);
}
/**
 * file_close - close the file descriptors
 * @fil: file descriptors to be closed
 */
void file_close(int fil)
{
int cl;
cl = close(fil);
if (cl == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fil %d\n", fil);
exit(100);
}
}
/**
 * main - copies contents of a file to another
 * @argc: number og arguments
 * @argv: array of pointers to arguments
 * Return: 0 (Success)
 * for incorrect argument count - exit code 97.
 * if file_from can't read or doesn't exist
 * -exit code 98
 *  if file_to can't be written to or created -exit
 * code 99
 * if file_from or file_to cannot be closed
 * exit code 100
 */
int main(int argc, char argv[])
{
int fr, to, r, w;
char *buf;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buf = create_buffer(argv[2]);
fr = open(argv[1], O_RDONLY);
r = read(fr, buf, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC 0664);
do {
if (fr == -1 || r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buf);
exit(98);
}
w = write(to, buf, r);
if (to == -1 || w == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buf);
exit(99);
}
r = read(fr, buf, 1024);
to = open(argv[2], O_WRONLY | O_APPEND);
} while (r > 0);
free(buf);
file_close(fr);
file_close(to);
return (0);
}
