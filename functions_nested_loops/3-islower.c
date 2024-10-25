#include "main.h"

/**
 * _islower - check if c is lowercase.
 * @c: check number
 * Return: - if lower return 1 - else return 0
 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
