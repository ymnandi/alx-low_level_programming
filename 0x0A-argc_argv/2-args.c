#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the result of the multiplication, followed by a new line
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);
}
