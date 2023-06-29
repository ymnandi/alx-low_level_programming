#include "main.h"
#include <stdio.h>

/**
 * leet - Encodes a string into 1337
 * @str: String to be encoded
 *
 * Return: Pointer to str
 */
char *leet(char *str)
{
int i, j;
char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};
char num[8] = {'0', '1', '3', '4', '5', '6', '7', '7'};
i = 0;
while (*(str + i))
{
for (j = 0; j < 8; j++)
{
if (*(str + i) == leet[j] || *(str + i) == (leet[j] + 32))
*(str + i) = num[j];
}
i++;
}
return (str);
}
