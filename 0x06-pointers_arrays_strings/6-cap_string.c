#include "main.h"
#include <stdio.h>

/**
 * cap_string - Capitalizes all words of a string
 * @s: String to be capitalized
 *
 * Return: Pointer to s
 */

char *cap_string(char *s)
{
int i, j;
char sep[] = {
' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'
};
i = 0;
if (s[i] >= 'a' && s[i] <= 'z')
s[i] -= 32;
while (s[i])
{
for (j = 0; j < 13; j++)
{
if (s[i] == sep[j])
{
if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
s[i + 1] -= 32;
break;
}
}
i++;
}
return (s);
}
