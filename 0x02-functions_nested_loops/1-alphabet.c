#include <stdio.h>

/**
 * main - Entry point
 * print_alphabet - function that prints alphabets
 * Return: passes output
 */

void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
putchar(c);
putchar('\n');
}

