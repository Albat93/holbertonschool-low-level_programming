#include "main.h"

/**
 * _strchr - locates character in a string
 * @s: pointer of string source
 * @c: character to locate
 * Return: return s with character locate
 */

char *_strchr(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
		{
			return (s);
		}
		if (!*s)
		{
			return (0);
		}
	}
	return (s);
}
