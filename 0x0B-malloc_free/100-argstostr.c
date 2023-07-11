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
int i, j, k, len = 0, total = 0;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
len++;
}
total = ac + len + 1;
concat = malloc(sizeof(char) * total);
if (concat == NULL)
return (NULL);
len = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
concat[len] = av[i][j];
len++;
}
concat[len] = '\n';
len++;
}
concat[len] = '\0';
return (concat);
}
