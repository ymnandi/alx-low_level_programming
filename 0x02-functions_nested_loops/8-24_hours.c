#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
int h = 0;
int m = 0;
while (h < 24)
{
while (m < 60)
{
_putchar(h / 10 + '0');
_putchar(h % 10 + '0');
_putchar(':');
_putchar(m / 10 + '0');
_putchar(m % 10 + '0');
_putchar('\n');
m++;
}
m = 0;
h++;
}
}
