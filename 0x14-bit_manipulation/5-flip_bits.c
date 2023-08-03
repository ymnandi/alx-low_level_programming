#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int i, check;
unsigned int count = 0;
for (i = 1UL << 63; i > 0; i = i >> 1)
{
check = n & i;
if (check != (m & i))
count++;
}
return (count);
}
