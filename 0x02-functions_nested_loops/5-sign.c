#include "main.h"
/**
 * print_sign - checks if n is positive, negative, or zero
 * Return: 1 if n is positive 0 is n is zero -1 if n is negative.
 * @n: parameter
 */
int print_sign(int n)
{
if (n == 0)
{
_putchar('0');
return (0);
}
else if (n > 0)
{
_putchar('+');
return(1);
}
else
{
_putchar('-');
return (-1);
}
}
