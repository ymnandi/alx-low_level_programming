#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
unsigned long int i, check;
int flag = 0;
if (n == 0)
_putchar('0');
for (i = 1UL << 63; i > 0; i = i >> 1)
{
check = n & i;
if (check)
{
_putchar('1');
flag = 1;
}
else if (flag == 1 || i == 1)
_putchar('0');
}
}
