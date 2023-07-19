#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if successful, 98, 99, or 100 if failure
 */
int main(int argc, char *argv[])
{
int b, result;
char *op;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
b = atoi(argv[1]);
if (b < 0)
{
printf("Error\n");
exit(2);
}
op = (char *)main;
for (result = 0; result < b; result++)
printf("%02hhx ", op[result]);
printf("\n");
return (0);
}
