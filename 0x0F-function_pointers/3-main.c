#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if successful, 98 if number of arguments is wrong, 99 if operator
 * is invalid, 100 if divide by 0 is attempted
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
