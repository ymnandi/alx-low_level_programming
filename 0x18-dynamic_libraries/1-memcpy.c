#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memcpy - copies memory area
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory area
 * @n: number of bytes to copy
 * Return: pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
char *dest_ptr = dest;
char *src_ptr = src;
for (i = 0; i < n; i++)
{
*dest_ptr = *src_ptr;
dest_ptr++;
src_ptr++;
}
return (dest);
}
