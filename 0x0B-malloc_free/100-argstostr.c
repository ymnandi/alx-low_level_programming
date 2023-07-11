#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to new string, or NULL if error
 */
char *argstostr(int ac, char **av)
{
char *concat;
int i, j, k = 0, len = 0;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
len++;
}
len += ac + 1;
concat = malloc(sizeof(char) * len);
if (concat == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++, k++)
concat[k] = av[i][j];
concat[k] = '\n';
k++;
}
concat[k] = '\0';
return (concat);
}
