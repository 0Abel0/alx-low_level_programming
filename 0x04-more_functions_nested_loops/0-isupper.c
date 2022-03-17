#include "main.h"

/**
 * _isupper - check if input is uppercase.
 * @c: parameter.
 * Return: 1 if input is uppercase 0 if input is not.
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
