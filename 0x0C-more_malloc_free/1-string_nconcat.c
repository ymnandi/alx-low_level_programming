#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate to s1
 *
 * Return: pointer to new string, NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int i, j, len1, len2;
while (s1 && s1[len1])
len1++;
while (s2 && s2[len2])
len2++;
if (n >= len2)
n = len2;
str = malloc(sizeof(char) * (len1 + n + 1));
if (str == NULL)
return (NULL);
for (i = 0; i < len1; i++)
str[i] = s1[i];
for (j = 0; j < n; j++)
str[i + j] = s2[j];
str[i + j] = '\0';
return (str);
}
