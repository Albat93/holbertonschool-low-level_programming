#include "main.h"

/**
 * _strcpy - copy contenu of variable to another
 * @dest: destination for copy
 * @src: source of pointer
 * Return: always 0
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
