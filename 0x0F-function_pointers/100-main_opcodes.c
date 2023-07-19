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
int (*f)(int, int);
int a, b, result;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
f = get_op_func(argv[2]);
if (f == NULL)
{
printf("Error\n");
exit(99);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
result = f(a, b);
printf("%d\n", result);
return (0);
}

