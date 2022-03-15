#include "main.h"
/**
 * print_last_digit - prints last digit
 * Return: last digit.
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
