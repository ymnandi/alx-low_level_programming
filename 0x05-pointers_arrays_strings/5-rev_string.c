#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to a char (also works with arrays!)
 *
 * Return: void
 */
void rev_string(char *s)
{
int len = 0;
while (*s)
{
len++;
s++;
}
s--;
while (len > 0)
{
_putchar(*s);
s--;
len--;
}
_putchar('\n');
return;
}
