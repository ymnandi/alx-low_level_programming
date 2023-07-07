#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * @dest: string to be appended to
 * @src: string to append
 * @n: number of bytes to be appended
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;

i = 0;
while (dest[i] != '\0')
i++;

j = 0;
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}

dest[i] = '\0';

return (dest);
}
