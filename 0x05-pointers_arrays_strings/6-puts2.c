#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: pointer to a char (also works with arrays!)
 *
 * Return: void
 */
void puts2(char *str)
{
int i = 0;
char c = str[0];
while (c != '\0')
{
if (i % 2 == 0)
_putchar(c);
i++;
c = str[i];
}
_putchar('\n');
}
