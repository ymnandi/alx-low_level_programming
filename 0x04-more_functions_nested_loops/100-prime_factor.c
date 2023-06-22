#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * main -print prime factors of 612852475143
 * Return: 0
 */
int main(void)
{
    long int n = 612852475143;
    long int i = 2;

    while (i < n)
    {
        if (n % i == 0)
        {
            n = n / i;
        }
        i++;
    }
    printf("%ld\n", n);
    return (0);
}
