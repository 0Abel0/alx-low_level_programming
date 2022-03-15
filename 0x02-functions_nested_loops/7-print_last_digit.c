#include "main.h"
/**
 * _abs - checks if n is positive, negative, or zero
 * Return: absolute value of parameter.
 * @x: parameter
 */
int print_last_digit(int x)
{
if (x < 0)
{
return (-1 * (x % 10));
}
else
{
return (x % 10);
}
}
