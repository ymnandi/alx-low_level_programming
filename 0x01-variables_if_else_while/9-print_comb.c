#include <stdio.h>
/**
 * main - Entry point.print numebers with commas and spaces
 * Return: Always 0 when (Successful)
 */
int main(void)
{
int v;
for (v = 48; v < 57; v++)
{
putchar(v);
if (v != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
