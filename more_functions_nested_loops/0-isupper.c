#include <ctype.h>
#include "main.h"
/**
 * _isupper - check if c is lowercase.
 * @c: check number
 * Return: - if upper return 1 - else return 0
 */
int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
