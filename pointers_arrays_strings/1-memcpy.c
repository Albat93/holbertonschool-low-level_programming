#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination file
 * @src: source file
 * @n: size of byte
 * Return: d
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	char *s = src;

	while (n--)
	{
		*d++ = *s++;
	}
	return (s);
}
