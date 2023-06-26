#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to a char (also works with arrays!)
 *
 * Return: void
 */
void puts_half(char *str)
{
int len = 0;
char *t = str;
char *s = str;

while (*t)
{
len++;
t++;
}
if (len % 2 == 0)
s += len / 2;
else
s += (len + 1) / 2;
while (*s)
{
_putchar(*s);
s++;
}
_putchar('\n');
return;
}
