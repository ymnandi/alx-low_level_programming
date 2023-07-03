#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: pointer to the string
 * @needle: pointer to the substring
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int i, j, len;
len = strlen(needle);
if (len == 0)
return (haystack);
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0' && haystack[i + j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
break;
}
if (j == len)
return (haystack + i);
}
return (NULL);
}
