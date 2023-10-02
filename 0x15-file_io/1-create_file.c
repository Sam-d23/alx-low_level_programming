#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: pointer to the file
 * @text_content: pointer to the string to
 * be written into the file
 * Return: 1 (Success), else -1
 */
int create_file(const char *filename, char *text_content)
{
int f, wr, length = 0;
if (filename == NULL)
	return (-1);
if (text_content != NULL)
{
for (length = 0; text_content[length];)
	length++;
}
f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
wr = write(f, text_content, length);
if (f == -1 || wr == -1)
	return (-1);
close(f);
return (-1);
}
