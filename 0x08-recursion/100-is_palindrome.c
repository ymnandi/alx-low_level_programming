#include "main.h"
#include <stdio.h>
/**
 * check_palindrome - checks if a string is a palindrome
 * @s: string to check
 * @len: length of s
 * Return: 1 if palindrome, 0 if not
 */
int check_palindrome(char *s, int len)
{
if (len <= 1)
return (1);
if (*s != *(s + len - 1))
return (0);
else
return (check_palindrome(s + 1, len - 2));
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: string to check length of
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
int len = _strlen_recursion(s);
return (check_palindrome(s, len));
}
