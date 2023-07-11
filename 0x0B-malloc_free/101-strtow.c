#include "main.h"
#include <stdlib.h>

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */

int count_word(char *s)
{
int i, n = 0;
for (i = 0; s[i]; i++)
{
if (s[i] != ' ' && (s[i + 1] == ' ' || s[i + 1] == '\0'))
n++;
}
return (n);
}
/**
 * strtow - splits a string into words.
 * @str: string to split
 * Return: pointer to an array of strings (words) or NULL if it fails
 */

char **strtow(char *str)
{
char **matrix, *tmp;
int i, j, k = 0, len = 0, words;
if (str == NULL || *str == '\0')
return (NULL);
words = count_word(str);
if (words == 0)
return (NULL);
matrix = malloc(sizeof(char *) * (words + 1));
if (matrix == NULL)
return (NULL);
for (i = 0; i < words; i++)
{
for (len = 0; str[k] == ' '; k++)
;
for (; str[k] != ' ' && str[k] != '\0'; k++)
len++;
matrix[i] = malloc(sizeof(char) * (len + 1));
if (matrix[i] == NULL)
{
for (i--; i >= 0; i--)
free(matrix[i]);
free(matrix);
return (NULL);
}
tmp = matrix[i];
for (j = 0; j < len; j++, tmp++)
*tmp = str[k - len + j];
*tmp = '\0';
}
matrix[i] = NULL;
return (matrix);
}
