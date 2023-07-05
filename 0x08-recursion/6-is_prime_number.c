#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (check_prime(n, 2));
}
