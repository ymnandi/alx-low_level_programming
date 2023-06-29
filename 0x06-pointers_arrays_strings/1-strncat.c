#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two strings
 * @dest: String to be appended to
 * @src: String to append
 * @n: Number of bytes to copy
 *
 * Return: Pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = 0;
while (*(dest + i))
i++;
j = 0;
while (*(src + j) &&j < n)
{
*(dest + i) = *(src + j);
i++;
j++;
}
*(dest + i) = '\0';
return (dest);
}
