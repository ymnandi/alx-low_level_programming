#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * main -print prime factors of 612852475143
 * Return: 0
 */
int main(void)
{
long int i, j, n = 612852475143;

for (i = 2; i <= sqrt(n); i++)
{
if (n % i == 0)
{
for (j = 2; j <= i; j++)
{
if (j == i)
{
printf("%ld\n", i);
n = n / i;
i = 1;
}
if (i % j == 0)
break;
}
}
}
printf("%ld\n", n);
return (0);
}
