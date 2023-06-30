#include "main.h"
#include <stdio.h>

/**
 * magic - Prints a[2] = 98
 *
 * Return: void
 */
void magic(void)
{
int *a;
int b;
a = &b;
*(a + 5) = 98;
printf("a[2] = %d\n", a[2]);
}
