#include "main.h"

/**
 * _strpbrk - searches string for any of a set of bytes
 * @s: string source to check
 * @accept: string to compare string match
 * Return: result of matching strings
 */

char *_strpbrk(char *s, char *accept)
{
	int j = 0;

	while (*s)
	{
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
				return (s);
			j++;
		}
		j = 0;
		s++;
	}
	return ('\0');
}
