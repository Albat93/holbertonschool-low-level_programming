#include "main.h"

/**
 * more_numbers - print numbers ten times
*/
void more_numbers(void)
{
	int c = 0;
	int num;

	while (c <= 9)
		{
		for (num = 0; num <= 9; num++)
		{
			if (c > 9)
			{
				_putchar((c / 10) + '0');
			}
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
		c++;
	}
}
