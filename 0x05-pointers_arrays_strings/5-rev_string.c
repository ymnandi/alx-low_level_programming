#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to a char (also works with arrays!)
 *
 * Return: void
 */
void rev_string(char *s)
{
int i;
int len = 0;
char v = s[0];

while (v != '\0')
{
len++;
v = s[len];
}
for (i = 0; i < len / 2; i++)
{
v = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = v;
}
}
