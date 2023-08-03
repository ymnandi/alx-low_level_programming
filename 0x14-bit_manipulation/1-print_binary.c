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
int i, count = 0;
unsigned long int check;
for (i = 1UL << 63; i > 0; i = i >> 1)
{
check = n & i;
if (check == i)
{
count++;
break;
}
}
if (count == 0)
_putchar('0');
else
{
for (i = 1UL << 63; i > 0; i = i >> 1)
{
check = n & i;
if (check == i)
_putchar('1');
else if (check == 0)
_putchar('0');
}
}
}
