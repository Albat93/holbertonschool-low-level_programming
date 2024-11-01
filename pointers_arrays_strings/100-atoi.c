#include "main.h"

/**
 *_atoi -  convert a string to an integer
 *@s: string to be converted
 *Return: Always 0.
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s == ' ' || *s == '\t')
	{
		s++;
	}
		if (*s == '-')
	{
		sign = -1;
		s++;
	}
		else if (*s == '+')
	{
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	return (result * sign);
}
