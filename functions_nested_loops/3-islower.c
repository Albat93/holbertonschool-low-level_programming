#include "main.h"

/**
 * main - check the code.
 * int _islower(int c) - check if c is lowercase.
 * function that check for lowercase character.
 * return - always 0
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
