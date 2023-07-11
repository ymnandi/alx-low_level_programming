#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words.
 * @str: string to split
 * Return: pointer to an array of strings (words) or NULL if it fails
 */
char **strtow(char *str)
{
char **array;
int i, j, k, l, m, n = 0, len = 0, wc = 0;
if (str == NULL || *str == '\0')
return (NULL);
for (i = 0; str[i]; i++)
len++;
len++;
array = malloc(sizeof(char *) * len);
if (array == NULL)
return (NULL);
for (i = 0; str[i]; i++)
{
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
wc++;
}
if (wc == 0)
return (NULL);
for (i = 0; str[i]; i++)
{
if (str[i] != ' ')
{
for (j = i; str[j] != ' ' && str[j] != '\0'; j++)
len++;
array[n] = malloc(sizeof(char) * len);
if (array[n] == NULL)
{
for (k = 0; k < n; k++)
free(array[k]);
free(array[n]);
return (NULL);
}
for (l = i, m = 0; l < j; l++, m++)
array[n][m] = str[l];
array[n][m] = '\0';
n++;
i = j;
}
}
array[n] = NULL;
return (array);
}
