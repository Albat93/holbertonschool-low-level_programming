#include "main.h"

/**
 * _memcpy - copies memory with constant byte
 * @dest: pointer string destination
 * @src: pointer string source
 * @n: n bytes of memory pointed
 * Return: pointer to the memory dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	unsigned int i = 0;

	while (*src && i < n)
	{
		*d++ = *s[i++];
	}
	return (dest);
}
