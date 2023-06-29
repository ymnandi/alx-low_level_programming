#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Difference of first non-matching character
 */
int _strcmp(char *s1, char *s2)
{
int i;
i = 0;
while (*(s1 + i) &&*(s2 + i) &&*(s1 + i) == *(s2 + i))
i++;
return (*(s1 + i) -*(s2 + i));
}
