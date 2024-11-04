#include "main.h"

/**
 * _strchr - locates character in a string
 * @s: pointer to the string
 * @c: character to locate
 * Return: return to the string in pointer s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
	s++;
	}
	return (0);
}
