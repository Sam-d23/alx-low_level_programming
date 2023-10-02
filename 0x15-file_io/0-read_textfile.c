#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename: the text file to be read
 * @letters: the number of letters
 * Return: wr - number of bytes read, else, 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *size;
ssize_t f;
ssize_t wr;
ssize_t r;
f = open(filename, O_RDONLY);
if (f == -1)
	return (0);
size = malloc(sizeof(char) * letters);
r = read(f, size, letters);
wr = write(STDOUT_FILENO, size, r);
free(size);
close(f);
return(wr);
}
