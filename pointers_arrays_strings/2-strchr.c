#include "main.h"

/**
 * _strchr - locates a character in a string
 * @char*s: pointer to the string
 * @char c: character to locate
 * Return: s
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
