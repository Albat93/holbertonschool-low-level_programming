#include "main.h"

/**
 * _strncat - cacatenate two strings
 * @dest: destination
 * @src: source of pointer
 * @n: The maximum number of characters to append from src
 * Return: always 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; i < n && dest[i] != '\0';)
		i++;

	for (j = 0; i < n && src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}

return (dest);
}
