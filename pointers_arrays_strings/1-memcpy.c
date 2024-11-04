#include "main.h"

/*
 * _memcpy - copies memory area
 * @char d: destination file
 * @char s: source file
 * Return: d
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	char *s = src;

	while (n--)
	{
		*d++ = * s++;
	}
	return (d);
}
