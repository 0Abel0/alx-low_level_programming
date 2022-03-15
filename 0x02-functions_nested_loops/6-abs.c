#include "main.h"
/**
 * _abs - checks if n is positive, negative, or zero
 * Return: absolute value of parameter.
 * @x: parameter
 */
int _abs(int x)
{
if (x < 0)
{
return (x * -1);
}
else
{
return (x);
}
}
