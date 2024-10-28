/**
 * print_line - print \n if 0 or less
 * else print _
 * @n: number check
 */

#include "main.h"

void print_line(int n)
{
	int i;

	if (n >= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
