#include "main.h"

/**
 * print_numbers - prints 0 - 9.
 * Return: None.
 */

void print_numbers(void)
{
int c = 0;
while (c <= 9)
{
_putchar(48 + c);
c++;
}
_putchar('\n');
}