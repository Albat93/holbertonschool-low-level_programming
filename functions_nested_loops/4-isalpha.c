#include "main.h"
#include <ctype.h>
/**
 * int _isalpha - check if c is lowercase or uppercase.
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
