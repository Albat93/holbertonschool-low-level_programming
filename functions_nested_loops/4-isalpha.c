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
	if (c >= 97 && c <= 122) || (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
