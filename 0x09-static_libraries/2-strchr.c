#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: character to be located
 * Return: pointer to first occurence of c, or NULL if not found
 */
char *_strchr(char *s, char c)
{
int i;

i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
return (s + i);
i++;
}

if (s[i] == c)
return (s + i);

return (NULL);
}
