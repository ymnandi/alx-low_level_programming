#include "main.h"
#include <stdio.h>
/**
 * largest_number - returns the largest of 3 numbers
 * @q: first integer
 * @v: second integer
 * @p: third integer
 * Return: .
 */
int largest_number(int q, int v, int p)
{
int lagnum;
if (q > v && q > p)
{
lagnum = q;
}
else if (v > q && v > p)
{
lagnum = v;
}
else
{
lagnum = p;
}
return (lagnum);
}
