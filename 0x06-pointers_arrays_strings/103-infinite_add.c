#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Adds two numbers
 * @n1: First number
 * @n2: Second number
 * @r: Buffer to store result
 * @size_r: Size of buffer
 *
 * Return: Pointer to buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, n, len1, len2, carry;
i = j = n = len1 = len2 = carry = 0;
while (*(n1 + len1))
len1++;
while (*(n2 + len2))
len2++;
if (len1 + 2 > size_r || len2 + 2 > size_r)
return (0);
len1--;
len2--;
while (len1 >= 0 || len2 >= 0)
{
if (len1 < 0)
i = 48;
else
i = *(n1 + len1);
if (len2 < 0)
j = 48;
else
j = *(n2 + len2);
n = carry + (i - 48) + (j - 48);
if (n > 9)
{
carry = n / 10;
n = n % 10;
}
else
carry = 0;
*(r + n) = n + 48;
len1--;
len2--;
}
if (carry > 0)
{
*(r + n + 1) = carry + 48;
return (r + n + 1);
}
else
return (r + n);
}
