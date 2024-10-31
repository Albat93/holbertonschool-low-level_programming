#include "main.h"
#include "2-strlen.c"
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

	for (i = 0; dest[i] != '\0';)
		i++;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

return (dest);
}
