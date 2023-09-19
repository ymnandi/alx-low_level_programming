#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t readed, printed;
char *buffer;
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
{
close(fd);
return (0);
}
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(fd);
return (0);
}
readed = read(fd, buffer, letters);
if (readed == -1)
{
close(fd);
free(buffer);
return (0);
}
printed = write(STDOUT_FILENO, buffer, readed);
if (printed == -1)
{
close(fd);
free(buffer);
return (0);
}
close(fd);
free(buffer);
return (printed);
}