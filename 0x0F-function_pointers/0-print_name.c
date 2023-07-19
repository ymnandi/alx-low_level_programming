#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: name to print
 * @f: function to print name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (f == NULL)
return;
f(name);
}
