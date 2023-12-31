#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string
 * @accept: pointer to the substring
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, count = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0' && s[i] != accept[j]; j++)
;
if (s[i] == accept[j])
count++;
if (accept[j] == '\0')
break;
}
return (count);
}
