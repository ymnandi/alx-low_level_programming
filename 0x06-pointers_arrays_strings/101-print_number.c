#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer
 * @n: Integer to be printed
 *
 * Return: void
 */

void print_number(int n)
{
unsigned int num, num2;
int i, d, num3;
if (n < 0)
{
_putchar('-');
num = -n;
}
else
{
num = n;
}
num2 = num;
d = 1;
while (num2 > 9)
{
d *= 10;
num2 /= 10;
}
for (i = d; i >= 1; i /= 10)
{
num3 = num / i;
_putchar((num3 % 10) + '0');
}
}
