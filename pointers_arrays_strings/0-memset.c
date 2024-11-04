#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: adress of source
 * @n: number of octet to fill
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
