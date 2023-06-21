#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _isalpha(int c)
{
return (c >= 'a' && c <= 'z' || (c >= 'A' && c <= 'Z'));
}
