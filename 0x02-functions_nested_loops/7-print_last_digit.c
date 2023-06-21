#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number
 * @n: The number to be checked
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
int last_digit = n % 10;
printf("%d", last_digit);
return (last_digit);
}
