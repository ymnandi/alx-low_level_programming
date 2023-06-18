#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
int k, v;

for (k = 0; k < 100; k++)
{
for (v = 0; v < 100; v++)
{
if (k < v)
{
putchar((k / 10) + 48);
putchar((k % 10) + 48);
putchar(' ');
putchar((v / 10) + 48);
putchar((v % 10) + 48);
if (k != 98 || v != 99)
{
putchar(',');
putchar(' ');
}
}
}
	}
putchar('\n');
return (0);
}
