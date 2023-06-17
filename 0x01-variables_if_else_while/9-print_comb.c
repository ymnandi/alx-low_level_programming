#include <stdio.h>
/**
 * main - Entry point.prints alphabet in reverse
 * Return: Always 0 when (Successful)
 */
int main(void)
{
int k, v;
for (k = 0; k <= 9; k++)
{
for (v = k; v <= 9; v++)
{
putchar('0' + k);
putchar('0' + v);
}
if (k != 9 || v != 9)
{
putchar(',');
putchar(' ');
}
}
{
putchar('\n');
return (0);
}
}
