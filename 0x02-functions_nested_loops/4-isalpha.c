#include "main.h"
/**
 * _isalpha - checks if letter
 * Return: 1 if letter 0 if not.
 * @c: parameter
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
