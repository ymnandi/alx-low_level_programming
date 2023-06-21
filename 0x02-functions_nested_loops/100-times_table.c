
#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: integer to be tested
 * Return: void
 */
void print_times_table(int n)
{
if (n < 0 || n > 15)
return;
for (int i = 0; i <= n; i++)
{
for (int j = 0; j <= n; j++)
{
int k = i * j;
if (j != 0)
_putchar(',');
_putchar(' ');
_putchar(' ');
if (k <= 9)
_putchar(' ');
if (k <= 99)
_putchar(' ');
if (k >= 100)
_putchar((k / 100) % 10 + '0');
if (k >= 10)
_putchar((k / 10) % 10 + '0');
_putchar(k % 10 + '0');
if (j != n)
_putchar(' ');
}
_putchar('\n');
}
}
