#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number to be modified
 * @index: index of the bit to be cleared
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int i;
if (index > (sizeof(unsigned long int) * 8))
return (-1);
i = 1UL << index;
i = ~i;
*n = *n & i;
return (1);
}
