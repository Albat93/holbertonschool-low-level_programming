#include "main.h"
#include "2-strlen.c"
/**
 * _strncpy - cacatenate two strings
 * @dest: destination
 * @src: source of pointer
 * @n: The maximum number of characters to append from src
 * Return: always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; n > i; i++)
		dest[i] = '\0';
	return (dest);
}
