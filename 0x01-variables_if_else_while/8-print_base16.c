#include <stdio.h>
/**
 * main - Entry point.prints alphabet in reverse
 * Return: Always 0 when (Successful)
 */
int main(void)
{
int k;
for (k = 0; k <= 9; k++)
{putchar('0' + k);
}
for (k = 0; k < 6 ; k++)
{putchar('a' + k);
}
putchar('\n');
return (0);
}
