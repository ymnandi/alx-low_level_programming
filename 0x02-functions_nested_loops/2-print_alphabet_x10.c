#include "main.h"
/**
 * print_alphabet_x10 - function that prints alphabets 10 times
 * Return: passes output
 */
void print_alphabet_x10(void)
{
char letter;
int r = 0;
while (r < 10)
{
letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
r++;
putchar('\n');
}
}
