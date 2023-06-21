#include <stdio.h>
#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: The number to print
 * Return: 1 if n is greater than zero, 0 if n is zero, -1 if n is less than
 * zero
 */
int print_sign(int n)
{
if (n > 0)
{putchar('+');
return (1);
}
else if (n == 0)
{putchar('0');
return (0);
}
else
{putchar('-');
return (-1);
}
return (0);
}
