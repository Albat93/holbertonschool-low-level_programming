#include "main.h"
#include <ctype.h>

/**
 * _isdigit - check if c is digit 0 through 9.
 * @c: number tested
 * Return: 1 if true 0 if false
 */

int _isdigit(int c)

{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}


}
