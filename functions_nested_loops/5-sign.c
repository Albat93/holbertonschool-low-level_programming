#include "main.h"

/**
 * print_sign - print sign of a number
 * @n: number tested
 * return:  - print + if greater, - if less, 0 if 0.
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
}
else if (n < 0)
{
_putchar('-');
}
else if (n == 0)
{
_putchar('0');
}
return (0);
}
