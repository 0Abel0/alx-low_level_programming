#include "main.h"
/**
 * _abs - checks if n is positive, negative, or zero
 * Return: absolute value of parameter.
 * @x: parameter
 */
int print_last_digit(int x)
{
{
int nv;
if (x < 0)
{
nv = -1 * (x % 10);
_putchar(nv + '0');
return (nv);
}
else
{
nv = x % 10;
_putchar(nv + '0');
return (nv);
}
}
}
