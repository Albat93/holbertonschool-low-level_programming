#include "main.h"

/**
 * _strlen_recursion - return length of string
 * @s: pointer to a string
 * Return: length of the string tested
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return ((1) + (_strlen_recursion(s + 1)));
	}
}
