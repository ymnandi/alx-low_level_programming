#include "main.h"
#include <time.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char *s;
int i;

srand(time(0));
for (i = 0; i < 10; i++)
{
s = generate_random_key();
printf("%s", s);
}
printf("\n");
return (0);
}
