#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
va_list ap;
unsigned int i = 0, j;
char *str;
const char t_arg[] = "cifs";
va_start(ap, format);
while (format && format[i])
{
j = 0;
while (t_arg[j])
{
if (format[i] == t_arg[j] && format[i + 1] != '\0')
{
switch (t_arg[j])
{
case 'c':
printf("%c", va_arg(ap, int));
break;
case 'i':
printf("%d", va_arg(ap, int));
break;
case 'f':
printf("%f", va_arg(ap, double));
break;
case 's':
str = va_arg(ap, char *);
if (!str)
str = "(nil)";
printf("%s", str);
break;
}
printf(", ");
break;
}
j++;
}
i++;
}
printf("\n");
va_end(ap);
}
