#include "main.h"
#include <ctype.h>
/**
 * _isalpha - check if c is lowercase or uppercase.
 * @c: number tested
 * Return: 1 if true 0 if false
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
