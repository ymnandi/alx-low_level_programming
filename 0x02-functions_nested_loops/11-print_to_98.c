#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer to start from
 * Description: prints all natural numbers from n to 98
 * Return: Always 0.
 */

void print_to_98(int n)
{
printf("%d", n);
if (n <= 98)
{
for (int i = n; i <= 98; i++)
{
printf(", %d", i);
}
}
else if (n > 98)
{
for (int i = n; i > 98; i--)
{
printf(", %d", i);
}
}
printf("\n");
}
