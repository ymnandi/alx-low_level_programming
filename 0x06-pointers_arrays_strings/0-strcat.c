#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: String to be appended to
 * @src: String to append
 *
 * Return: Pointer to dest
 */
char *_strcat(char *dest, char *src)
{
    int i, j;

    i = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    j = 0;
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        j++;
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
