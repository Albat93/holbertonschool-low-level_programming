#include "main.h"

/**
 * print_square - draws a square line
 * @size:
 */
void print_square(int size)
{
	int d, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (d = 0; d < size; d++)
		{
			for (j = 1; j < size; j++)
			{
				_putchar(35);
			}
			_putchar(35);
			_putchar('\n');
		}
	}
}
