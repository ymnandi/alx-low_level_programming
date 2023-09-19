#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Copies a string
 * @dest: String to be copied to
 * @src: String to be copied
 * @n: Number of bytes to copy
 *
 * Return: Pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;
while (*(src + i) &&i < n)
{
*(dest + i) = *(src + i);
i++;
}
while (i < n)
{
*(dest + i) = '\0';
i++;
}
return (dest);
}
