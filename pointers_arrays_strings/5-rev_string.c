#include "main.h"
#include "2-strlen.c"
/**
 * Main - check the code
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int first = 0;
	int last = _strlen(s) -1;
	char tmp;

	while (first < last)
	{
	tmp = s[first];
	s[first] = s[last];
	s[last] = tmp;

	first++;
	last--;

	}
}
