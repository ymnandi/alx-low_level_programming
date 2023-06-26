#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to a char (also works with arrays!)
 *
 * Return: length of string
 */
int _strlen(char *s)
{
int len = 0;
while (*s)
{
len++;
s++;
}
return (len);
}
