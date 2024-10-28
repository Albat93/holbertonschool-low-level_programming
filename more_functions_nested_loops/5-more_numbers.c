#include "main.h"

/**
 * more_numbers - print numbers ten times
 */
void more_numbers(void)
{
	int n = 0;
	int num;

	while (n <= 9)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
			_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');

		n++;
	}
}
