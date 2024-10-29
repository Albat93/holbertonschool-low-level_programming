#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int first, last;

	if (first >= last)
	{
		return;
	}
	char tmp = s[first];
	s[first] = s[last];
	s[last] = tmp;

	_putchar(s, first + 1, last - 1);

_putchar('\n');
}
