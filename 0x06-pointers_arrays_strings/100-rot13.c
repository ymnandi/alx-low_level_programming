#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encodes a string using rot13
 * @s: String to be encoded
 *
 * Return: Pointer to s
 */

char *rot13(char *s)
{
int i, j;
char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
for (i = 0; s[i]; i++)
{
for (j = 0; alpha[j]; j++)
{
if (s[i] == alpha[j])
{
s[i] = rot[j];
break;
}
}
}
return (s);
}
