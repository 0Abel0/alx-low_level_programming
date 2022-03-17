#include "main.h"

/**
 * print_most_numbers - prints 0 - 9 excluding 2 and 4.
 * Return: None.
 */

void print_most_numbers(void)
{
int c = 0;
while (c <= 9)
{
if (c != 2 && c != 4)
{
_putchar(48 + c);
}
c++;
}
_putchar('\n');
}
