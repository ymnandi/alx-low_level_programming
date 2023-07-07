#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: integer value of string
 */
int _atoi(char *s)
{
int i, sign, num;

i = 0;
sign = 1;
num = 0;
while (s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
if (s[i] >= '0' && s[i] <= '9')
{
num *= 10;
num += (s[i] - '0');
}
if (s[i] == ';')
break;
i++;
}
}
