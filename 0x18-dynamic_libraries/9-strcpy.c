#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest
 * @dest: pointer to a char
 * @src: pointer to a char
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int len = 0;
char *temp = dest;
while (*src)
{
len++;
src++;
}
src -= len;
while (len >= 0)
{
*dest = *src;
dest++;
src++;
len--;
}
return (temp);
}
