#include "main.h"
#include <stdio.h>

/**
 * leet - Encodes a string into 1337
 * @str: String to be encoded
 *
 * Return: Pointer to str
 */
char *leet(char *str)
{
int i, j;
char leet[] = "4433007711";
char alpha[] = "aAeEoOtTlL";
for (i = 0; str[i]; i++)
{
for (j = 0; alpha[j]; j++)
{
if (str[i] == alpha[j])
str[i] = leet[j];
}
}
return (str);
}
int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}