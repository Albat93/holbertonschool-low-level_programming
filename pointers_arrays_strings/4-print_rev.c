#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s : pointer tested
 * Return: Always 0.
*/

void print_rev(char *s)

{
	int length = 0;

	while (*s != '\0')
		{
		length++;
		s++;
		}

	s--;

	while (length > 0)
	{
		_putchar(*s);
		s--;
		length--;
	}

	_putchar('\n');
}
