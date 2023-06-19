#include <stdio.h>

/**
 * main - Entry point
 * description :prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
int k, v;
for (k = 0; k <= 8; k++)
{
for (v = k + 1; v <= 9; v++)
{
putchar(k + '0');
putchar(v + '0');
if (!(k == 8 && v == 9))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
