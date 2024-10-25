/**
 * _abs - print value of integer.
 * @n: check integer
 * Return: 0 absolute or -1 not absolute
 */


#include "main.h"
#include <stdlib.h>

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
