#include "main.h"
/**
 * main - check the code.
 *print alphabet x10.
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char c;
	int counter;

	for (counter = 0; counter < 10; counter++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
