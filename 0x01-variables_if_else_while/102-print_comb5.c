#include <stdio.h>
/**
 * main - Entry point
 * Description: print all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
int k, l;
for (k = 0; k <= 99; k++)
{
for (l = k; l <= 99; l++)
{
int tens1 = k / 10;
int ones1 = k % 10;
int tens2 = l / 10;
int ones2 = l % 10;
putchar(tens1 + '0');
putchar(ones1 + '0');
putchar(' ');
putchar(tens2 + '0');
putchar(ones2 + '0');
putchar(',');

putchar(' ');
}
}
return (0);
}
