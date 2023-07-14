#include  "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */

int is_digit(char *s)
{
int i = 0;
while (s[i])
{
if (s[i] < '0' || s[i] > '9')
return (0);
i++;
}
return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to be evaluated
 *
 * Return: length of string
 */
int _strlen(char *s)
{
int i = 0;
while (s[i])
i++;
return (i);
}

/**
 * errors - handles errors for main
 */

void errors(void)
{
int i = 0;
char *err = ERR_MSG;
while (err[i])
{
_putchar(err[i]);
i++;
}
_putchar('\n');
exit(98);
}
/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
int i, j, len1, len2, len;
char *s;
if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
errors();
len1 = _strlen(argv[1]);
len2 = _strlen(argv[2]);
len = len1 + len2;
s = _calloc(sizeof(char), len + 1);
if (!s)
errors();
for (i = len1 - 1; i >= 0; i--)
{
for (j = len2 - 1; j >= 0; j--)
{
s[i + j + 1] += (argv[1][i] - '0') * (argv[2][j] - '0');
if (s[i + j + 1] > 9)
{
s[i + j] += s[i + j + 1] / 10;
s[i + j + 1] %= 10;
}
}
}
i = 0;
while (s[i] == 0 && i < len)
i++;
if (i == len)
_putchar('0');
else
{
while (i < len)
_putchar(s[i++] + '0');
}
_putchar('\n');
free(s);
return (0);
}
