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
char *t = s;
char *end = s;

while (*t)
{
len++;
t++;
}
end += len - 1;
while (len > 0)
{
*s = *end;
s++;
end--;
len--;
}
return;
}
