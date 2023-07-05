#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 * Return: 1 if prime, 0 if not
 */
int check_prime(int n, int i)
{
if (n % i == 0 && i != n)
return (0);
if (i == n)
return (1);
return (check_prime(n, i + 1));
}
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
