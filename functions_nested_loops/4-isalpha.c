#include "main.h"
#include <stdio.h>
/**
 * main - check the code.
 * int _isalpha(int c) - check if c is lowercase or uppercase.
 * function that check for lowercase or uppercase character.
 * return - always 0
 */

int _isalpha(int c)

{
	if (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
