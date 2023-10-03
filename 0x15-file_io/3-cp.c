#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
void check_IO_stat(int stat, int fd, char *filename, char mode);
/**
 * main - copies contents of a file
 * to another file
 * @argc: argument count
 * @argv: the passed arguments
 * Return: 1 (Success), else, exit
 */
int main(int argc, char *argv[])
{
int s, d, n = 1024, w, close_s, close_d;
unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
char buffer[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
exit(97);
}
s = open(argv[1], O_RDONLY);
check_IO_stat(s, -1, argv[1], 'O');
d = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
check_IO_stat(d, -1, argv[2], 'W');
while (n == 1024)
{
n = read(s, buffer, sizeof(buffer));
if (n == -1)
	check_IO_stat(-1, -1, argv[1], 'O');
w = write(d, buffer, n);
if (w == -1)
	check_IO_stat(-1, -1, argv[2], 'W');
}
close_s = close(s);
check_IO_stat(close_s, s, NULL, 'C');
close_d = close(d);
check_IO_stat(close_d, d, NULL, 'C');
return (0);
}
/**
 * check_IO_stat - checks whether file can be opened or closed
 * @stat: file descriptor of file to be opened
 * @filename: name of the file
 * @mode: opening or closing of file
 * @fd: file descriptor
 * Return: void
 */
void check_IO_stat(int stat, int fd, char *filename, char mode)
{
if (mode == 'C' && stat == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
else if (mode == 'O' && stat == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
exit(98);
}
else if (mode == 'W' && stat == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
exit(99);
}
}

