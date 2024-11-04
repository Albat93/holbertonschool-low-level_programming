#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: char test
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int j;

	for (j = 0; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
