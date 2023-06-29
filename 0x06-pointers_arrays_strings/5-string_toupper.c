#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @s: String to be changed
 *
 * Return: Pointer to s
 */

char *string_toupper(char *s)
{
int i;
i = 0;
while (s[i])
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] -= 32;
i++;
}
return (s);
}
